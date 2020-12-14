#include <stdlib.h>
#include <stdio.h>

void Echanger(float* a, float* b) { //Pointeur a
	float tmp;
	tmp = *a; //Contenu du pointeur a
	*a = *b;
	*b = tmp;
}

int main() {
	float l;
	float L;
	float h;
	int i = 1;
	while (i == 1) {
		do {
			printf("Largeur du bagage en cm l:\n");
			scanf_s("%f", &l);
			printf("Longueur du bagage en cm L:\n");
			scanf_s("%f", &L);
			printf("Hauteur du bagage en cm h:\n");
			scanf_s("%f", &h);
		} while ((1 > l && l > 150 && 1 > L && L > 150 && 1 > h && h > 150));
		while (L < l || l < h) {
			if (L < l) {
				Echanger(&L, &l);
			}
			if (l < h) {
				Echanger(&l, &h);
			}
		}
		if ((L <= 55 && l <= 35 && h <= 25)) {
			printf("VALIDE\n");
		}
		else {
			printf("NON VALIDE\n\n");
		}
	}
}