#include "Renderer.h"
#include "Engine.h"

namespace engine {

    Coords Renderer::GetPosition() {
        auto coords = Engine::getInstance()->GetObject(object_name)->GetComponents<Coords>();

        if (coords) {
            return *coords;
        }

        return Coords(sf::Vector2f(0.0, 0.0));
    }

} //end namespace engine