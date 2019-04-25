cmake_minimum_required(VERSION 3.12)
project(GameEngine)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(GameEngine
        README.md GameObject.cpp GameObject.h Renderer.cpp Renderer.h Script.h Engine.cpp Engine.h EventManager.cpp EventManager.h DrawManager.cpp DrawManager.h DataStorage.cpp DataStorage.h LogicsManager.cpp LogicsManager.h PhysicsManager.cpp PhysicsManager.h Coords.cpp Coords.h RigidBody.cpp RigidBody.h Collider.cpp Collider.h Component.cpp Component.h main.cpp)

find_library(SYSTEM sfml-system)
find_library(WINDOW sfml-window)
find_library(GRAPHICS sfml-graphics)

target_link_libraries(GameEngine ${SYSTEM})
target_link_libraries(GameEngine ${WINDOW})
target_link_libraries(GameEngine ${GRAPHICS})