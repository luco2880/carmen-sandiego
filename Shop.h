#ifndef SHOP_H
#define SHOP_H

#include "Screen.h"
#include "Item.h"
#include "ItemType.h"
#include <iostream>
#include <vector>

using namespace std; 

class Shop
{
    public :
    Shop();

    void showMenu();
    void addItem(Item item);



    private :
    vector<Item> inventory;
    vector<ItemType> item_types;
    Screen screen;


};
 
#endif