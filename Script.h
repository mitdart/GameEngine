#ifndef GAMEENGINE_SCRIPT_H
#define GAMEENGINE_SCRIPT_H

#include "Component.h"

namespace engine {

    class Script : public Component {
    public:
        virtual void start() = 0;
        virtual void update() = 0;
    };

} //end namespace engine

#endif //GAMEENGINE_SCRIPT_H
