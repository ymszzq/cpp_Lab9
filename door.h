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


    virtual void door_print();
};


#endif //LAB9_DOOR_H
