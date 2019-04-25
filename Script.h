#pragma once

#ifndef GAMEENGINE_SCRIPT_H
#define GAMEENGINE_SCRIPT_H

#include "Component.h"

namespace engine {

    class Script : public Component {
    public:
        virtual void Start() = 0;
        virtual void Update() = 0;
    };

} //end namespace engine

#endif //GAMEENGINE_SCRIPT_H
