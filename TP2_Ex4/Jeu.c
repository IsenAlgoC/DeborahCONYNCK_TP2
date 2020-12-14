#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
	int a = 0;
	int Score = 1;
	int Nombre = 0;
	srand(time(NULL));
	Nombre = rand() % 3000;
	printf("Jouons! Devinez le prix:");
	scanf_s("%d", &a);
	while (a != Nombre) {
		if (a > Nombre) {
			printf("\n Moins cher  ");
			scanf_s("%d", &a);
			Score += 1;
		}
		if (a < Nombre) {
			printf("\n Plus cher  ");
			scanf_s("%d", &a);
			Score += 1;
		}

	}
	printf("\n Gagne! Bravo beau gosse tu as reussis en %d coups", Score);
}