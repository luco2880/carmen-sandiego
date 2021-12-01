#include <iostream>
#include "Player.h"
#include "Computer.h"
#include "ComputerPartItem.h"
#include "Screen.h"

Player::Player()
{
    Screen screen;
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
        cout << item.getName() << endl;
        cout << "is inserting!!!"<< endl;
        player_inventory.push_back(item);
    }
    else
    {
        Item player_item = getItem(index);
        int new_quantity = player_item.getQuantity() + item.getQuantity();
        player_item.setQuantity(new_quantity);
    }
}

void Player::removeComputerParts()
{
    const int COMPUTER_PART_ID = 1;
    vector<Item> new_player_inventory;
    //int inventorySize = player_inventory.size();
    for (int i = 0; i < player_inventory.size(); i++)
    {
        if (player_inventory[i].getType() != COMPUTER_PART_ID || player_inventory[i].getId() == 7)
        {
            new_player_inventory.push_back(player_inventory[i]);
        }
    }
    player_inventory = new_player_inventory;
}

void Player::displayPlayerInventory()
{
    screen.display("PLAYER INVENTORY");
    screen.display("===============\n");     
    for (int i = 0; i < player_inventory.size(); i++)
    {
        screen.display(player_inventory[i].getName() + to_string(player_inventory[i].getQuantity()));
    }
    screen.display("===============\n"); 
}

