//
// Created by Ziqian Zhang on 2018-11-30.
//
#include "f_maze_factory.h"
#include "e_maze_factory.h"
#include "maze_game.h"

int main(){
    maze_game game;
//
    maze_factory *e_fact = new e_maze_factory();
    maze *m = game.create_maze(*e_fact);

    cout << endl;

    maze_factory *f_fact = new f_maze_factory();
    maze *d = game.create_maze(*f_fact);

    return 0;

}