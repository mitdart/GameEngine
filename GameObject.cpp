#include "GameObject.h"

namespace engine {

    template <typename CompT> void GameObject::AddComponent() {
        if (GetComponents<CompT>() == nullptr) {
            components.insert(new CompT);
        }
    }

    template <typename CompT> CompT* GameObject::GetComponents() {
        for (auto component : this->components) {
            CompT* comp;
            if (comp = dynamic_cast<CompT>(component)) {
                return comp;
            }
        }
        return nullptr;
    }

    template <typename CompT> void GameObject::RemoveComponent() {
    }

}