#include <iostream>
#include <limits>
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

void Screen::clearBuffer()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

char Screen::collectCharInput()
{
    char move;
    cin.get(move);
    return move;
}

int Screen::collectNumberInput()
{
    string input;
    getline(cin, input);
    int option = stoi(input);
    return option;
}
