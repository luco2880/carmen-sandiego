#include <iostream>
#include "Player.h"
#include "Computer.h"
#include "ComputerPartItem.h"

Player::Player()
{
    name = "";
    dogecoins = 200;
    player_inventory = {Computer("Computer", 100, 1, 7), Item("VPN", 20, 3, 9)};
}

string Player::getName()
{
    return name;
}

int Player::getDogecoins()
{
    return dogecoins;
}

void Player::setName(string m_name)
{
    name = m_name;
}



