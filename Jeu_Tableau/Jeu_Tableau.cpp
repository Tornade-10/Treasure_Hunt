// Jeu_Tableau.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include <tuple>

#include "Plateau.h"
#include "PlayerInput.h"



	//Déclaration des variables
bool treasurFound = false;
int essay = 0;
int x;
int y;


void Random()
{
	//Création de la seed
	srand(time(0));

	//création des nombres random
	int idxRandom_WIDTH = rand() % WIDTH;
	int idxRandom_HEIGHT = rand() % HEIGHT;

	//Modification du tableau
	cases[idxRandom_WIDTH][idxRandom_HEIGHT] = Coffre;
}

int main()
{

	Random();

	do 
	{
		Draw_Playfield();

		Input(x, y);

		//Verifie si les coordonees X et Y ne sont pas superieur au tableau
		if(y > HEIGHT)
		{
			printf("Coordonee trop grande \n");
			continue;
		}
		else if (x > WIDTH)
		{
			printf("Coordonee trop grande \n");
			continue;
		}

		//Verifie si les coordonees contiennent un tresor
		if (cases[(x - 1)][(y - 1)] == Coffre)
		{
			//Trésor trouver
			std::cout << "treasure found" << std::endl;
			treasurFound = true;
		}
		else
		{
			//Trésor non trouver
			std::cout << "no treasure" << std::endl;
			marcage[(x - 1)][(y - 1)] = Creuser;
			essay++;
		}

		//Compte le nombre d'essaie
		if (essay >= WIDTH * HEIGHT / 2)
		{
			//Echec de la découverte du trésor
			treasurFound = true;
			std::cout << "you found no treasure" << std::endl;
		}
	}
	while (treasurFound == false);

	Draw_Playfield();

	return EXIT_SUCCESS;
}
