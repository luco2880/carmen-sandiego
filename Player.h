#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>

using namespace std; 

class Player
{
    public :
    Player();

    string getName();

    void setName(string m_name);

    private :
    string name;


};
 
#endif