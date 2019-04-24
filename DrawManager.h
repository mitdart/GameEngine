#ifndef GAMEENGINE_DRAWMANAGER_H
#define GAMEENGINE_DRAWMANAGER_H

#include "Renderer.h"
#include "Coords.h"
#include "Engine.h"
#include "GameObject.h"
#include <list>
#include <SFML/Graphics.hpp>


namespace engine {

    class DrawManager {
    public:
        Coords coords;
        sf::RenderWindow* render_window;
        std::list<Renderer*> renderers;
        void Render();
    };

}


#endif //GAMEENGINE_DRAWMANAGER_H
