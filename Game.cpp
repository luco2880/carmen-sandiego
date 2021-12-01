#include <iostream>
#include <limits>
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
    if (map.isHackerLocation())
    {
        battleHacker();
        screen.clear();
        screen.clearBuffer();
        return;
    }
    player.displayPlayerInventory();
    map.displayMap();
    map.displayMoves();
    char move = screen.collectCharInput();
    map.executeMove(move);
    screen.clear();
    screen.clearBuffer();

}

void Game::setUpMap()
{
    map.spawnBestBuy(1, 3);
    map.spawnNPC(2, 5);
    map.spawnNPC(3, 8);
    map.spawnHacker(0, 1);
    Hacker hacker1("Steve", 0, 1);
    hackers.push_back(hacker1);

}

void Game::setUp()
{
    shop.shopSetUp(player);
    setUpMap();
    string input;
    screen.display("Enter player name: ");
    getline(cin, input);
    player.setName(input);
    shop.showMenu();
    shop.processOrder(player);
}

void Game::battleHacker()
{
    screen.display("You entered a battle!");
    int y = map.getPlayerColPosition();
    int x = map.getPlayerRowPosition();
    int currentHackerIndex = findHackerIndex(x, y);
    screen.display("You are fighting " + hackers[currentHackerIndex].getHackerName());
    screen.display("If you want to attack press a or press f to forfiet");
    char option = tolower(screen.collectCharInput());
    if(option == 'a')
    {

    }
    else if(option == 'f')
    {
        map.setPlayerColPosition(0);
        map.setPlayerRowPosition(0);
        player.removeComputerParts();
        player.displayPlayerInventory();
    }
    else
    {
        screen.display("invalid input");
        battleHacker();
    }
}

int Game::findHackerIndex(int m_x, int m_y)
{
    for (int i = 0; i < hackers.size(); i++)
    {
        if (hackers[i].isHackerCoord(m_x, m_y))
        {
            return i;
        }
    }
    return -1;
}

void Game::run()
{
    setUp();
    while (true)
    {
        playTurn();

    }   



}