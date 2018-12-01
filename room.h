//
// Created by Ziqian Zhang on 2018-11-30.
//

#include "wall.h"

#ifndef LAB9_ROOM_H
#define LAB9_ROOM_H




class room{
protected:
    wall* wall1;
public:
    virtual ~room()= default;
    virtual void room_print()=0;


};
#endif //LAB9_ROOM_H