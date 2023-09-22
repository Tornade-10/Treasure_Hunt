#pragma once

void Draw_Playfield();

//Les Define
#define WIDTH 4
#define HEIGHT 4

//Création des enums
enum Sable
{
	Rien = 0,
	Coffre = 1,
	Creuser = 2
};

//création des tableaux

//Tableau jeu
extern int cases[WIDTH][HEIGHT];

//Tableau affichage
extern int marcage[WIDTH][HEIGHT];