#ifndef MAP_H
#define MAP_H

#include <fstream>
#include <iostream>
#include <ctype.h>

using namespace std; 

class Map
{
     // these are class variables 
     private:
          int m_Difficulty;

     // call the enemy class with enemy.getEnemies(int difficulty)
     // when one room is defeated call function isDefeated() which will increment the diffculty 
     // and call the getEnemies() at the new difficulty
     // in order to get the enemies at a select difficulty run a for loop
     // for i < array.length() if (m_DiffLevel[i] == difficulty)
     // array.at[i] add that to the vector and return the vector
     private:
          static const int num_rows = 5;
          static const int num_cols = 9;
          static const int num_npcs = 3;
          static const int num_hackers = 3;

          int playerPosition[2];
          int bestBuyPosition[2];
          int npcPositions[num_npcs][2];
          int hackerPositions[num_hackers][2];
          char mapData[num_rows][num_cols];

          int npc_count;
          int hacker_count;
          bool best_buy_on_map;

     public :
          Map();
          Map(int difficulty);

          void resetMap();

          // getters
          int getPlayerRowPosition();
          int getPlayerColPosition();
          int getNPCCount();
          int getHackerCount();

          // setters
          void setPlayerRowPosition(int);
          void setPlayerColPosition(int);
          void setNPCCount(int);
          void setHackerCount(int);

          bool spawnNPC(int, int);
          bool spawnBestBuy(int, int);
          bool spawnHacker(int, int);
          bool despawnHacker(int, int);

          void displayMap();
          void displayMoves();  
          bool executeMove(char);

          bool isBestBuyLocation();
          bool isNPCLocation();
          bool isHackerLocation();

          bool isBestBuyOnMap();
};
 
#endif