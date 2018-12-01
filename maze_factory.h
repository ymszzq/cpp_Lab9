//
// Created by Ziqian Zhang on 2018-11-30.
//

#ifndef LAB9_MAZE_FACTORY_H
#define LAB9_MAZE_FACTORY_H


#include "maze.h"
#include "wall.h"
#include "room.h"
#include "door.h"
#include <iostream>
using namespace std;


class maze_factory {
public:
virtual maze* make_maze()=0;
virtual wall* make_wall_()=0;
virtual room* make_room()=0;
virtual door* make_door(room& room1,room& room2)=0;


};


#endif //LAB9_MAZE_FACTORY_H
