#include <iostream>
#include "Player.h"

Player::Player()
{
    name = "";
}

string Player::getName()
{
    return name;
}

void Player::setName(string m_name)
{
    name = m_name;
}



