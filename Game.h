#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>
#include "Hacker.h"
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
    void battleHacker();
    int findHackerIndex(int m_x, int m_y);

    private :
    Screen screen;
    Player player;
    Shop shop;
    Map map;
    vector<Hacker> hackers;

};
 
#endif