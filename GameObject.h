#ifndef GAMEENGINE_GAMEOBJECT_H
#define GAMEENGINE_GAMEOBJECT_H

#include <map>
#include <list>
#include <string>

#include "Component.h"

namespace  engine {

    class GameObject {
    public:
        std::list<Component*> components;

        template <typename CompT> void AddComponent();

        template <typename CompT> CompT* GetComponents();

        template <typename CompT> void RemoveComponent();
    };

} //end namespace engine

#endif //GAMEENGINE_GAMEOBJECT_H
