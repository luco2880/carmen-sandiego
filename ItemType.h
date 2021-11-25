#ifndef ITEMTYPE_H
#define ITEMTYPE_H

#include "Item.h"
#include <iostream>
#include <vector>

using namespace std; 

class ItemType
{
    public :
    ItemType(string m_name, string m_description, int m_id);

    string getName();
    string getDescription();
    int getId();
    vector<Item> getItems();
    void setItems(vector<Item> m_items);

    private :
    string name;
    string description;
    int id;
    vector<Item> items;



};
 
#endif