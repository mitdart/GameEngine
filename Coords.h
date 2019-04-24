//
// Created by adm1n on 4/24/19.
//

#ifndef GAMEENGINE_COORDS_H
#define GAMEENGINE_COORDS_H

#include "Component.h"

#include <SFML/Graphics.hpp>

namespace engine {

    class Coords : public Component, public sf::Vector2f {
    public:
        Coords(){
            this->x = 0.0;
            this->y = 0.0;
        }

        explicit Coords(sf::Vector2f coords) {
            this->x = coords.x;
            this->y = coords.y;
        }
    };

}

#endif //GAMEENGINE_COORDS_H
