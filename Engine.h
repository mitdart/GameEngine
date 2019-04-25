#pragma once

#ifndef GAMEENGINE_ENGINE_H
#define GAMEENGINE_ENGINE_H

#include "EventManager.h"
#include "DrawManager.h"
#include "DataStorage.h"
#include "LogicsManager.h"
#include "PhysicsManager.h"

namespace engine {

    class Engine {
    private:

        static Engine *instance;

        Engine();

        Engine(const Engine &);

        Engine operator=(Engine &);

    public:

        static Engine *getInstance() {
            if (instance != nullptr) {
                instance = new Engine;
            }

            return instance;
        }

        void AddObject(std::string name);

        void RemoveObject(std::string name);

        GameObject* GetObject(std::string name);

        EventManager event_manager;
        DrawManager draw_manager;
        DataStorage data_storage;
        LogicsManager logics_manager;
        PhysicsManager physics_manager;
    };

}//end namespace engine

#endif //GAMEENGINE_ENGINE_H
