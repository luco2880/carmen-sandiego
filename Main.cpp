// this will get started
// instantiate an instance of game.
#include <iostream>
#include "Player.h"
#include "Game.h"

using namespace std;

int main()
{
    Player player;
    Game game(player);
    game.run();


}

// HOW TO COMMIT ( SAVE )

// git add . && git commit -m "put your commit message here"
