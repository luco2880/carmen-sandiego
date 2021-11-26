#include <iostream>
#include "ComputerPartItem.h"
#include "Item.h"

ComputerPartItem::ComputerPartItem(string m_name, int m_cost, int m_type, int m_id) : Item( m_name,  m_cost,  m_type,  m_id)
{
    capacity = 3;
}


void ComputerPartItem::setQuantity(int m_quantity)
{
    quantity = m_quantity;
}
int ComputerPartItem::getQuantity()
{
    return quantity;
}
ComputerPartItem ComputerPartItem::cloneItem()
{
    ComputerPartItem new_ComputerPartItem = ComputerPartItem(name, cost, type, id);
    return new_ComputerPartItem;
}