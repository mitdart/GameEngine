

#include "EventManager.h"

namespace engine {

    bool EventManager::GetKey(Event &event) {
        return render_window.pollEvent(event);
    }

}
