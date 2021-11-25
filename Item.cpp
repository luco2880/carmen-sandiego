#include <iostream>
#include "Item.h"

Item::Item(string m_name, int m_cost, int m_type, int m_id)
{
    name = m_name;
    cost = m_cost;
    type = m_type;
    id = m_id;
}
string Item::getName()
{
    return name;
}
int Item::getCost()
{
    return cost;
}
int Item::getId()
{
    return id;
}