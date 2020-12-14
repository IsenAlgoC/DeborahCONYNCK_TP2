#include <stdlib.h>
#include <stdio.h>

int main() {
	int somme = 0;
	int i;
	for (i = 0; i < 101; i++) {
		somme = i + somme;
	}
	printf("1ere methode %d\n", somme);
	i = 0;
	somme = 0;
	while (i < 101) {
		somme = somme + i;
		i += 1;
	}
	printf("2eme methode %d\n", somme);
	i = 0;
	somme = 0;
	do {
		somme = somme + i;
		i += 1;
	} while (i <= 100);
	printf("3eme methode %d\n", somme);
	somme = 0;

	//Sans dépassement de capacité
	unsigned short int n = 0;
	unsigned short int Somme = 0;
	while (65535 - Somme >= n) {
		n = n + 1;
		Somme = Somme + n;
	}
	printf("Valeur maximale de n: %d", n);
	printf("\n");
	int k = 0;
	int g;
	unsigned short Max;
	scanf_s("%hu", &Max);
	for (g = 0; g <= Max; g++) {
		k = g + k;
	}
	printf("Somme avec max %hu est de %d\n", Max, k);

	unsigned short N = 3298;
	n = 361;
	int sum = 0;
	int j;
	while (N > n) {
		printf("N trop grand donner une autre valeur:");
		scanf_s("%hu\n", &N);
	}
	for (j = 0; j <= N; j++) {
		sum = j + sum;
	}
	printf("Somme avec max %hu est de %d\n", N, sum);
}