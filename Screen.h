#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>

using namespace std; 

class Screen
{
    public :
    Screen();

    void display(string text);
    void clear();
    void clearBuffer();
    char collectCharInput();
    int collectNumberInput();

    private :



};
 
#endif