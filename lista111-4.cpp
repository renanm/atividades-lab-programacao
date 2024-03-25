#include<stdio.h>

/*

Elabore um programa em C/C++ que leia 5 valores do tipo int em um vetor A.
Ao final, imprima todos os
elementos, o maior, o menor, e a média dos valores informados.

*/

main() {
	int lista[5], maior = -99999, menor = 99999, soma;
	float media;
	for (int i = 0; i < 5; i++) {
		printf("Informe um valor para a posicao %d da lista\n", i);
		scanf("%d", &lista[i]);
		if (lista[i] < menor) {
			menor = lista[i];
		}
		if (lista[i] > maior) {
			maior = lista[i];
		}
		soma += lista[i];
	}
	media = soma / 5;
	
	printf("\nListagem dos numeros:\n");
	for (int i = 0; i < 5; i++) {
		printf("%d\t", lista[i]);
	}
	
	printf("\nMaior: %d\n", maior);
	printf("Menor: %d\n", menor);
	printf("Media: %f\n", media);	
}
