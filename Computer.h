#ifndef COMPUTER_H
#define COMPUTER_H


#include <iostream>
#include "Item.h"

using namespace std; 

class Computer : public Item
{
    public :

    Computer(string m_name, int m_cost, int m_type, int m_id);

    int getQuantity();
    void setQuantity(int m_quantity);
    Computer cloneComputer();


    private :

    int quantity;
    int capacity;

};
 
#endif