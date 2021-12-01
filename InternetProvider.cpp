#include <iostream>
#include "InternetProvider.h"
#include "Item.h"

InternetProvider::InternetProvider(string m_name, int m_cost, int m_type, int m_id, int m_level) : Item( m_name,  m_cost,  m_type,  m_id)
{
    level = m_level;
}

int InternetProvider::getLevel()
{
    return level;
}

Item InternetProvider::cloneItem()
{
    InternetProvider new_Item = InternetProvider(name, cost, type, id, level);
    return new_Item;
}

string InternetProvider::getName()
{
    Item::getName();
    cout << "made it to get name" << endl;
    return name + " " + to_string(level);
}

void InternetProvider::setLevel(int m_level)
{
    cout << "function override works" << endl;
    level = m_level;
}



