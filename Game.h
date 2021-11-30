#ifndef GAME_H
#define GAME_H

#include <iostream>
#include "Screen.h"
#include "Player.h"
#include "Shop.h"
#include "Map.h"


using namespace std; 


class Game
{
    public :
    Game();
    Game(Player m_player);

    void run();
    void playTurn();
    void setUpMap();
    void setUp();

    private :
    Screen screen;
    Player player;
    Shop shop;
    Map map;

};
 
#endif