//
// Created by Ziqian Zhang on 2018-11-30.
//

#ifndef LAB9_MAZE_GAME_H
#define LAB9_MAZE_GAME_H


#include "maze_factory.h"

class maze_game {
public:
maze* create_maze(maze_factory &mazeFactory){
    maze* maze1 = mazeFactory.make_maze();

    return maze1;
};


};


#endif //LAB9_MAZE_GAME_H
