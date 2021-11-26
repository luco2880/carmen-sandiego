#ifndef COMPUTERPARTITEM_H
#define COMPUTERPARTITEM_H


#include <iostream>
#include "Item.h"

using namespace std; 

class ComputerPartItem : private Item
{
    public :

    ComputerPartItem(string m_name, int m_cost, int m_type, int m_id);

    int getQuantity();
    void setQuantity(int m_quantity);
    ComputerPartItem cloneItem();


    private :

    int quantity;
    int capacity;

};
 
#endif