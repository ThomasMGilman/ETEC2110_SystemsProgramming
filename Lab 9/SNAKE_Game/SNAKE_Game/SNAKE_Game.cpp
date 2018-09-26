// SNAKE_Game.cpp : Defines the entry point for the console application.
//
//Thomas Gilman
//Systems Programming
//ETEC 2110
//51
//Lab 9
//part 2 SNAKE GAME
#include "stdafx.h"
#include "Board.h"

int main(int argc, char * argv[])
{
	Board *myGame = new Board();//Create Snake Class
	myGame->updateGame();		//loops until you lose or exit

	printf("Out of game loop");
	delete(myGame);				//free memory
    return 0;
}

