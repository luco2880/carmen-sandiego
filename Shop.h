#ifndef SHOP_H
#define SHOP_H


#include "Screen.h"
#include "Player.h"
#include "Item.h"
#include "ItemType.h"
#include "Player.h"
#include <iostream>
#include <vector>

using namespace std; 

class Shop
{
    public :
    Shop();


    void shopSetUp(Player m_player);
    void showMenu();
    void addItem(Item item);
    void processOrder(Player& m_player);
    bool isPurchaseValid(int number_purchased, Item item);
    int findItemIndex(int id);
    Item getItem(int index);



    private :
    vector<Item> inventory;
    vector<ItemType> item_types;
    Screen screen;
    Player player;


};
 
#endif