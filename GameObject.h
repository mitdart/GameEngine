#pragma once

#ifndef GAMEENGINE_GAMEOBJECT_H
#define GAMEENGINE_GAMEOBJECT_H

#include <map>
#include <list>
#include <string>

#include "Script.h"
#include "Component.h"


namespace engine {

    class Component;

    class GameObject {
    public:
        explicit GameObject(std::string name_) : name(std::move(name_)) {}

        std::list<Component *> components;

        template<typename CompT>
        void AddComponent();

        template<typename CompT>
        CompT *GetComponents();

        template<typename CompT>
        void RemoveComponent();

    private:
        std::string name;
    };

    template<typename CompT>
    CompT *GameObject::GetComponents() {
        for (auto component : this->components) {
            if (typeid(CompT) == typeid(component)) {
                return static_cast<CompT*>(component);
            }
        }

        return nullptr;
    }

    template<typename CompT>
    void GameObject::AddComponent() {
        if (GetComponents<CompT>() == nullptr) {
            auto comp = new CompT;
            comp->object = name;
//            if (typeid(CompT) == typeid(Script)) {
//                comp->Start();
//                Engine::getInstance()->logics_manager.scripts.insert(comp);
//            }
//            if (typeid(CompT) == typeid(Renderer)) {
//                Engine::getInstance()->draw_manager.renderers.insert(comp);
//            }
            components.insert(comp);
        }
    }

    template<typename CompT>
    void GameObject::RemoveComponent() {

    }

} //end namespace engine

#endif //GAMEENGINE_GAMEOBJECT_H
