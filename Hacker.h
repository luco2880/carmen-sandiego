#ifndef HACKER_H
#define HACKER_H

#include <iostream>

using namespace std; 

class Hacker
{
    public :
    Hacker(string m_name,int m_difficulty, int m_x, int m_y);

    string getHackerName();
    int getHackerDifficulty();
    bool isHackerCoord(int m_x, int m_y);

    private :
    string name;
    int difficulty;
    int x;
    int y;

};
 
#endif