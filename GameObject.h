#ifndef GAMEENGINE_GAMEOBJECT_H
#define GAMEENGINE_GAMEOBJECT_H

#include "Script.h"
#include "Renderer.h"

namespace  engine {

    class GameObject {
    public:
        Script *script;
        Renderer *renderer;
    };

} //end namespace engine

#endif //GAMEENGINE_GAMEOBJECT_H
