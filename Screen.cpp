#include <iostream>
#include "Screen.h"

Screen::Screen()
{

}

void Screen::display(string text)
{
    cout << text << endl;
}

int Screen::collectNumberInput()
{
    string input;
    getline(cin, input);
    int option = stoi(input);
    return option;
}
