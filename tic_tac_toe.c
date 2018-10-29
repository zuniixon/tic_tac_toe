#include <stdio.h>
#include <stdlib.h>

void dessiner_tab(int tab);

int main(void) {
	int tab[3][3] = {{0, 0, 0},{0, 0, 0},{0, 0, 0}};
	dessiner_tab(tab);
	return EXIT_SUCCESS;
}

void dessiner_tab(int tab) {
	// Dessine le plateau passé en paramètre
	for (int i = 0; i < 3; ++i)
	{
		printf("\t %d %d %d\n", tab[i][0], tab[i][1], tab[i][2]);

	}
}
