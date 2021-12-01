#ifndef HACKER_H
#define HACKER_H

#include <iostream>

using namespace std; 

class Hacker
{
    public :
    Hacker(string m_name, int m_x, int m_y);

    string getHackerName();
    bool isHackerCoord(int m_x, int m_y);
    
    private :
    string name;
    int x;
    int y;

};
 
#endif