#pragma once

#ifndef GAMEENGINE_LOGICSMANAGER_H
#define GAMEENGINE_LOGICSMANAGER_H

#include "Script.h"

#include <list>

namespace engine {

    class LogicsManager {
    public:
        std::list<Script *> scripts;

        void UpdateLogic();
    };

}

#endif //GAMEENGINE_LOGICSMANAGER_H
