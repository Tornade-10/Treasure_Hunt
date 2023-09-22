
#include <iostream>
#include "Plateau.h"
int cases[WIDTH][HEIGHT];
int marcage[WIDTH][HEIGHT];

//Affiche le Plateau de jeu
void Draw_Playfield()
{
	for (int row = 0; row < HEIGHT; row++)
	{
		for (int column = 0; column < WIDTH; column++)
		{
			//Dessine le tableau "maracage"
			int cases_stats = marcage[column][row];
			//Réaction celon le résultat
			switch (cases_stats)
			{
			case Rien:
				std::cout << '-';
				break;

			case Creuser:
				std::cout << '0';
				break;

			case Coffre:
				std::cout << 'x';
				break;
			}
		}
		std::cout << "\n";
	}
}