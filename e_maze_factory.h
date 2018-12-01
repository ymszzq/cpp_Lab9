//
// Created by Ziqian Zhang on 2018-11-30.
//

#ifndef LAB9_ENCHANTED_MAZE_FACTORY_H
#define LAB9_ENCHANTED_MAZE_FACTORY_H


#include "maze_factory.h"

class enchanted_wall:public wall{
public:
    ~enchanted_wall() override = default;

    enchanted_wall(){
        wall_print();
    }
    void wall_print() override{
        cout<<"e wall\n";
    }
};


class enchated_door:public door{
public:
    ~enchated_door() override = default;

    enchated_door(room& room1, room& room2) {
        this->room1=&room1;
        this->room2=&room2;
        door_print();
    }

private:
    void door_print() override{
        cout<<"e wall\n";
    };
};


class enchated_room:public room{
public:
    ~enchated_room() override = default;

    enchated_room(wall* wall2){
        room_print();
    }

    void room_print() override{
        cout<<"e room\n";
    };

};


class enchated_maze:public maze{

public:
    ~enchated_maze() override = default;

    enchated_maze(room* room1){
        roomList.push_back(room1);
        cout<<"e_rooms added to maze";
        maze_print();

    };

    void maze_print() override {
        cout<<"e maze\n";
    }
};




class e_maze_factory: public maze_factory {
    maze* make_maze() override{
        room * room1 = make_room();
        room* room2 = make_room();
        door* door1 = make_door(*room1,*room2);
        return new enchated_maze(room1);
    };

    wall* make_wall_() override{
        return new enchanted_wall();
    };

    room* make_room() override{
        return new enchated_room(make_wall_());
    };

    door* make_door(room &room1, room &room2) override{
        return new enchated_door(room1,room2);
    };
};


#endif //LAB9_ENCHANTED_MAZE_FACTORY_H
