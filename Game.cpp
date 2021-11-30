#include <iostream>
#include "Game.h"
#include "Player.h"
#include "Screen.h"
#include "Shop.h"
#include "Map.h"

Game::Game(Player m_player)
{
    Screen screen; 
    Player player = m_player;
    Shop shop;
    Map map;
}

void Game::playTurn()
{
    map.displayMap();
    map.displayMoves();
    char move;
    cin.get(move);
    map.executeMove(move);
    
}

void Game::setUpMap()
{
    map.spawnBestBuy(1, 3);
    map.spawnNPC(2, 5);
    map.spawnNPC(3, 8);
    map.spawnHacker(1, 1);

}

void Game::setUp()
{
    shop.shopSetUp(player);
    setUpMap();
}

void Game::run()
{
        setUp();
        string input;
        screen.display("Enter player name: ");
        getline(cin, input);
        player.setName(input);
        shop.showMenu();
        shop.processOrder();


}