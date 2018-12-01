cmake_minimum_required(VERSION 3.12)
project(Lab9)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab9 main.cpp maze_factory.h maze_game.cpp maze_game.h maze.h wall.h door.h driver.cpp enchanted_maze_factory.h futuristic_maze_factory.h room.h)