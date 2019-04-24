//
// Created by adm1n on 4/24/19.
//

#ifndef GAMEENGINE_LOGICSMANAGER_H
#define GAMEENGINE_LOGICSMANAGER_H

#include "Script.h"

#include <list>

namespace engine {

    class LogicsManager {
    public:
        std::list<Script*> scripts;
        void UpdateLogic();
    };

}

#endif //GAMEENGINE_LOGICSMANAGER_H
