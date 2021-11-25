#ifndef GAME_H
#define GAME_H

#include <iostream>
#include "Screen.h"
#include "Player.h"
#include "Shop.h"


using namespace std; 


class Game
{
    public :
    Game();

    void run();

    private :
    Screen screen;
    Player player;
    Shop shop;

};
 
#endif