#include <iostream>
#include "Computer.h"
#include "Item.h"

Computer::Computer(string m_name, int m_cost, int m_type, int m_id) : Item( m_name,  m_cost,  m_type,  m_id)
{
    capacity = 2;
}



Computer Computer::cloneComputer()
{
    Computer new_Computer = Computer(name, cost, type, id);
    return new_Computer;
}