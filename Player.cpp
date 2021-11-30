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

int Player::findItemIndex(int id)
{
    for (int i = 0; i < player_inventory.size(); i++)
    {
    if (id == player_inventory[i].getId())
    {
        return i;
    }
    }
    return -1;
}
Item Player::getItem(int index)
{
    return player_inventory[index];
}
void Player::transferItemToInventory(Item item)
{
    int index = findItemIndex(item.getId());
    if (index == -1)
    {
        player_inventory.push_back(item);
    }
    else
    {
        Item player_item = getItem(index);
        int new_quantity = player_item.getQuantity() + item.getQuantity();
        player_item.setQuantity(new_quantity);
    }
}

