#ifndef ITEM_H
#define ITEM_H


#include <iostream>

using namespace std; 

class Item
{
    public :
    Item(string m_name, int m_cost, int m_type, int m_id);

    int getCost();
    int getId();
    string getName();

    private :
    string name;
    int cost;
    int type;
    int id;

};
 
#endif