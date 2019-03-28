#ifndef GAMEENGINE_SCRIPT_H
#define GAMEENGINE_SCRIPT_H

namespace engine {

    class Script {
    public:
        virtual void start() = 0;
        virtual void update() = 0;
    };

} //end namespace engine

#endif //GAMEENGINE_SCRIPT_H
