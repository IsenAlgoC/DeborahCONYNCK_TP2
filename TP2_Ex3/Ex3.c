#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main() {
	int a;
	unsigned short Annee = 12345;
	while (Annee > 10000) {
		printf("Entrez l'annee: ");
		scanf_s("%hu", &Annee);
	}
	if ((Annee % 4 == 0) && ((Annee % 100 == 0) && (Annee % 400 == 0))) {
		a = 0;
	}
	if (Annee % 4 == 0) {
		a = 0;
	}
	if ((Annee % 4 == 0) && ((Annee % 100 == 0) && (Annee % 400 != 0))) {
		a = 1;
	}
	if (Annee % 4 != 0) {
		a = 1;
	}
	if (a == 0) {
		printf("%hu est une annee bissextile\n", Annee);
	}
	else {
		printf("%hu n'est pas une annee bissextile\n", Annee);
	}
	//Version en booleen
	bool b;
	if ((Annee % 4 != 0) || (Annee % 100 != 0) || ((Annee % 100 == 0) && (Annee % 400 != 0))) {
		b = 0;
	}
	else {
		b = 1;
	}
	if (b == 0) {
		printf("%hu est une annee bissextile\n", Annee);
	}
	else {
		printf("%hu n'est pas une annee bissextile", Annee);
	}
}