#include <stdio.h>
#include <stdlib.h>

void dessiner_tab(int tab[3][3]);
char joueur(int k);

int main(void) {
	printf("TicTacToe\n");
	int tab[3][3] = {{rand() % 3, rand() % 3, rand() % 3},
					{rand() % 3, rand() % 3, rand() % 3},
					{rand() % 3, rand() % 3, rand() % 3}};
	dessiner_tab(tab);
	return EXIT_SUCCESS;
}

void dessiner_tab(int tab[3][3]) {
	// Dessine le plateau passé en paramètre
	char ligne[3] = {'A', 'B', 'C'};
	printf("  1 2 3\n");
	for (int i = 0; i < 3; ++i)
	{
		printf("%c %c %c %c\n",ligne[i], joueur(tab[i][0]), joueur(tab[i][1]), joueur(tab[i][2]));

	}
}

char joueur(int k) {
	if (k == 1)
	{
		return 'X';
	}else{
		if (k == 2)
		{
			return 'O';
		}else{
			return '.';
		}
	}
}
