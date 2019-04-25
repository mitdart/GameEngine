#pragma once

#ifndef GAMEENGINE_COORDS_H
#define GAMEENGINE_COORDS_H

#include "Script.h"

#include <SFML/Graphics.hpp>

namespace engine {

    class Coords : public Component, public sf::Vector2f {
    public:
        Coords() : Component() {
            this->x = 0.0;
            this->y = 0.0;
        }

        explicit Coords(sf::Vector2f coords) : Component() {
            this->x = coords.x;
            this->y = coords.y;
        }

        Coords& operator=(sf::Vector2f coords) {
            this->x = coords.x;
            this->y = coords.y;
            return *this;
        }
    };

}

#endif //GAMEENGINE_COORDS_H
