#include <iostream>
#include "Game.h"
#include "Player.h"
#include "Screen.h"
#include "Shop.h"

Game::Game(Player m_player)
{
    Screen screen; 
    Player player = m_player;
    Shop shop(m_player);
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