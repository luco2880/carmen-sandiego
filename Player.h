#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <vector>
#include "Item.h"
#include "Screen.h"

using namespace std; 

class Player
{
    public :
    Player();

    string getName();
    int getDogecoins();
    void transferItemToInventory(Item item);
    void removeComputerParts();
    int findItemIndex(int id);
    Item getItem(int index);

    void setName(string m_name);
    void displayPlayerInventory();
    void attackHacker(int hacker_difficulty);
    int getQuantityOfItem(int id);
    void setISPLevel(int m_level);

    private :
    string name;
    vector<Item> player_inventory;
    int dogecoins;
    Screen screen;


};
 
#endif