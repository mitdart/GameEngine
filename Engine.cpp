#include "Engine.h"

namespace engine {

    Engine::Engine() {

    }

    Engine* Engine::instance;

    engine::Engine engine::Engine::operator=(engine::Engine &) {
        return engine::Engine();
    }

    void Engine::AddObject(std::string name) {
        auto object = new GameObject(name);
        data_storage.emplace(name, object);
    }

    GameObject* Engine::GetObject(std::string name) {
        if (data_storage.find(name) != data_storage.end()) {
            return data_storage.at(name);
        }
        return nullptr;
    }

    void Engine::RemoveObject(std::string name) {
        if (GetObject(name) != nullptr) {
            data_storage.erase(name);
        }
    }

}