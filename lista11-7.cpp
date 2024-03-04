#include <stdio.h>

/*
7) Criar um programa que defina um vetor de n posições e calcular a soma dos
elementos impares
*/

main() {
	int tamanho, soma = 0;
	printf("Informe o tamanho do vetor:\n");
	scanf("%d", &tamanho);
	
	int vetor[tamanho];
	for (int i = 0; i < tamanho; i++) {
		printf("Informe o elemento %d para o Vetor A:\n", i + 1);
		scanf("%d", &vetor[i]);
		if (vetor[i] % 2 == 1) {
			soma += vetor[i];
		}
	}
	
	printf("\nSoma dos elementos impares: %d\n", soma);	
}
