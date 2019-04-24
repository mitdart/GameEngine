#ifndef GAMEENGINE_RENDERER_H
#define GAMEENGINE_RENDERER_H

#include <SFML/Graphics.hpp>

#include "Component.h"
#include "Coords.h"

namespace engine {

class Renderer : public Component, public sf::Sprite {
    public:
        Coords GetPosition() {
            Coords* coords = object.GetComponents<Coords>()
            if (coords) {
                return *coords;
            }
            return Coords(sf::Vector2f(0.0, 0.0));
        }
    };

} //end namespace engine


#endif //GAMEENGINE_RENDERER_H
