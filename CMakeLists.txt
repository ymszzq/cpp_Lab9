cmake_minimum_required(VERSION 3.12)
project(Lab9)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab9 maze_factory.h maze_game.h maze.h wall.h door.h driver.cpp e_maze_factory.h f_maze_factory.h room.h)