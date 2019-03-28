cmake_minimum_required(VERSION 3.12)
project(GameEngine)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(GameEngine
        README.md main.cpp GameObject.cpp GameObject.h Renderer.cpp Renderer.h Script.h)
