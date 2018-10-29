#include <stdio.h>
#include <stdlib.h>

/*
	Ébauche tableau :

	int tableau[3][3]	= 	{{0, 0, 0},
						 	{0, 0, 0},
						 	{0, 0, 0}}
*/
int tab_init();
void dessiner_tab(int tab, int longueur);

int main(void) {

	return EXIT_SUCCESS;
}

int tab_init() {
	// Initialise le plateau vide et ensuite le dessine
	int tab[3][3] 	= 	{{0, 0, 0},
					 	{0, 0, 0},
					 	{0, 0, 0}};
 	dessiner_tab(tab);
	return tab;
}

void dessiner_tab(int tab, int longueur) {
	// Dessine le plateau passé en paramètre
}