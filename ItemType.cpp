#include <iostream>
#include <vector>
#include "ItemType.h"

ItemType::ItemType(string m_name, string m_description, int m_id)
{
    name = m_name;
    description = m_description; 
    id = m_id;
}

string ItemType::getName()
{
    return name;
}
string ItemType::getDescription()
{
    return description;
}
int ItemType::getId()
{
    return id;
}
vector<Item> ItemType::getItems()
{
    return items;
}
void ItemType::setItems(vector<Item> m_items)
{
    items = m_items;
}
