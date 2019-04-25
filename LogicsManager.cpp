
#include "LogicsManager.h"

namespace engine {

    void LogicsManager::UpdateLogic() {
        for (auto script : scripts) {
            script->Update();
        }
    };

}