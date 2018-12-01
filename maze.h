//
// Created by Ziqian Zhang on 2018-11-30.
//

#ifndef LAB9_MAZE_H
#define LAB9_MAZE_H


#include <vector>
#include "room.h"

class maze {
protected:
    std::vector<room*> roomList;
public:
    virtual ~maze()= default;
    virtual void maze_print()=0;
};


#endif //LAB9_MAZE_H
