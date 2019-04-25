#pragma once

#ifndef GAMEENGINE_RENDERER_H
#define GAMEENGINE_RENDERER_H

#include <SFML/Graphics.hpp>

#include "Coords.h"

namespace engine {

    class GameObject;

    class Renderer : public Component, public sf::Sprite {
    public:
        Coords GetPosition();
    };

} //end namespace engine


#endif //GAMEENGINE_RENDERER_H
