#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <vector>
#include "Item.h"

using namespace std; 

class Player
{
    public :
    Player();

    string getName();

    void setName(string m_name);

    private :
    string name;
    vector<Item> player_inventory;


};
 
#endif