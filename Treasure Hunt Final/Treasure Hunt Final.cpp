// Treasure Hunt Final.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "GameEngine.h"
#include <iostream>
using namespace std;
int main()
{

	GameEngine game("GameConfig.txt");
	game.printHunters(cout);
	game.printTreasures(cout);
	game.play();
	getchar();
    return 0;
}

