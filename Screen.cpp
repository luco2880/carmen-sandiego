#include <iostream>
#include "Screen.h"

Screen::Screen()
{

}

void Screen::display(string text)
{
    cout << text << endl;
}

void Screen::clear()
{
    cout << "\033[2J\033[1;1H";
}

int Screen::collectNumberInput()
{
    string input;
    getline(cin, input);
    int option = stoi(input);
    return option;
}
