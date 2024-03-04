#include <stdio.h>

/*
21) Faça um programa que lê uma matriz Amxm e mostra a soma dos elementos
da diagonal principal.
*/

main() {
	int tamanho;
	float soma;
	printf("Informe o numero de linhas e colunas da matriz:\n");
	scanf("%d", &tamanho);
	
	float matriz[tamanho][tamanho];
	for (int i = 0; i < tamanho; i++) {
		for (int j = 0; j < tamanho; j++) {
			printf("Informe o valor para o indice [%d][%d] da matriz:\n", i, j);
			scanf("%f", &matriz[i][j]);
			
			if (i == j) {
				soma += matriz[i][j];
			}
		}
	}
	
	printf("\nSoma dos elementos da diagonal principal: %f\n", soma);	
}
