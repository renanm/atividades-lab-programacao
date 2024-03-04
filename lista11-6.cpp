#include <stdio.h>

/*
6) Ler N elementos de um vetor A e um valor x. Criar o vetor B contendo os
elementos do vetor A multiplicados por x.
*/

main() {
	int tamanho, multiplicador;
	printf("Informe o tamanho do vetor:\n");
	scanf("%d", &tamanho);
	printf("Informe o multiplicador:\n");
	scanf("%d", &multiplicador);
	
	int vetorA[tamanho], vetorB[tamanho];
	for (int i = 0; i < tamanho; i++) {
		printf("Informe o elemento %d para o Vetor A:\n", i + 1);
		scanf("%d", &vetorA[i]);
		vetorB[i] = vetorA[i] * multiplicador;
	}
	
	printf("\nElementos do Vetor B:\n");
	for (int i = 0; i < tamanho; i++) {
		printf("%d\n", vetorB[i]);
	}		
}
