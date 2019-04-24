#ifndef GAMEENGINE_EVENTMANAGER_H
#define GAMEENGINE_EVENTMANAGER_H


#include <SFML/Graphics.hpp>

namespace engine {

    typedef sf::Event Event;

    class EventManager {
    public:
        sf::RenderWindow render_window;
        bool GetKey(Event& event);
    };

}

#endif //GAMEENGINE_EVENTMANAGER_H
