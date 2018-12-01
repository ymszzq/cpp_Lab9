//
// Created by Ziqian Zhang on 2018-11-30.
//

#ifndef LAB9_FUTURISTIC_MAZE_FACTORY_H
#define LAB9_FUTURISTIC_MAZE_FACTORY_H


#include "maze_factory.h"


class f_wall:public wall{
public:
    f_wall(){
        wall_print();
    }
    ~f_wall(){

    }
    void wall_print() override {
        cout<<"f_wall\n";
    }

};

class f_door:public  door{
public:
    f_door(room &room1, room &room2){
        this->room1=&room1;
        this->room2=&room2;
        door_print();
    }
    void door_print() override {
        cout<<"f_door\n";
    }
};

class f_room:public room{
public:
    f_room(wall* wall2){
        room_print();
    }
    ~f_room() override {

    }

    void room_print() override {
cout<<"f_room\n";
    }

};

class f_maze:public maze{

public:
    f_maze(room* room1){
        roomList.push_back(room1);
        cout<<"f_rooms added to maze";
        maze_print();
    }

    ~f_maze() override= default;

    void maze_print() override {
        cout<<"f_maze maze\n";
    }
};


class f_maze_factory : public maze_factory{
    maze *make_maze() override {
        room * room1 = make_room();
        room* room2 = make_room();
        door* door1 = make_door(*room1,*room2);
        return new f_maze(room1);
    }

    wall *make_wall_() override {
        return new f_wall();
    }

    room *make_room() override {
        return new f_room(make_wall_());
    }

    door *make_door(room &room1, room &room2) override {
        return new f_door(room1,room2);
    }
};


#endif //LAB9_FUTURISTIC_MAZE_FACTORY_H
