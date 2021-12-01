#ifndef INTERNETPROVIDER_H
#define INTERNETPROVIDER_H


#include <iostream>
#include "Item.h"

using namespace std; 

class InternetProvider : public Item
{
    public :

    InternetProvider(string m_name, int m_cost, int m_type, int m_id, int m_level);

    int getLevel();
    string getName();
    void setLevel(int m_level);
    Item cloneItem();



    private :
    int level;


};
 
#endif