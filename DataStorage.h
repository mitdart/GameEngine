#ifndef GAMEENGINE_DATASTORAGE_H
#define GAMEENGINE_DATASTORAGE_H

#include "GameObject.h"
#include <map>

namespace engine {

    class DataStorage : public std::map<std::string, GameObject> {
    };

}

#endif //GAMEENGINE_DATASTORAGE_H
