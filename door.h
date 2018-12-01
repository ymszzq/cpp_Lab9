//
// Created by Ziqian Zhang on 2018-11-30.
//
#include "room.h"
#ifndef LAB9_DOOR_H

#define LAB9_DOOR_H




class door {
protected:
    room* room1;
    room* room2;
public:
    virtual ~door()= default;

    virtual void door_print()=0;
};


#endif //LAB9_DOOR_H
