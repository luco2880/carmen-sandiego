#include <iostream>
#include "Game.h"
#include "Player.h"
#include "Screen.h"
#include "Shop.h"

Game::Game()
{
    Screen screen; 
    Player player;
    Shop shop(player);
}

void Game::run()
{
    while (true)
    {
        string input;
        screen.display("Enter player name: ");
        getline(cin, input);
        if (input == "q")
        {
            break;
        }
        player.setName(input);
        shop.showMenu();
        shop.processOrder();
        
    }
}