#include <iostream>
#include "Hacker.h"

Hacker::Hacker(string m_name, int m_x, int m_y)
{
    name = m_name;
    x = m_x;
    y = m_y;
}

string Hacker::getHackerName()
{
    return name;
}

bool Hacker::isHackerCoord(int m_x, int m_y)
{
    if(m_x == x && m_y == y)
    {
        return true;
    }
    return false;
}
