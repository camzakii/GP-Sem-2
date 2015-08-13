#include "Player.h"
#include <iostream>

int main()
{
	//Print wrong struct from freestore for some reason
	Player* pPlayer = NULL;
	pPlayer = new Player();

	pPlayer->printStats();
	delete pPlayer;
	pPlayer->printStats();

	return(0);
}