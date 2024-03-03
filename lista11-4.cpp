#include <stdio.h>

/*
4) Escreva um programa que lê um vetor de dimensão n e imprime o índice do 
maior elemento daquele vetor
*/

main() {
	int tamanho;
	printf("Informe o tamanho:\n");
	scanf("%d", &tamanho);
	
	int vetor[tamanho];
	
	for (int i = 0; i < tamanho; i++) {
		printf("Informe um numero para o vetor:\n");
		scanf("%d", &vetor[i]);
	}
	
	int maior = vetor[0];
	int indiceMaior;
	for (int i = 0; i < tamanho; i++) {
		if (vetor[i] >= maior) {
			maior = vetor[i];
			indiceMaior = i;
		}
	}
	
	printf("\nIndice do maior elemento do vetor: %d\n", indiceMaior);
}
