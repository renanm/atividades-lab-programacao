#include <stdio.h>

/*
22) Fa�a um programa que l� uma matriz Amxm e mostra o menor elemento da
diagonal secund�ria.
*/

main() {
	int tamanho;
	printf("Informe o numero de linhas e colunas da matriz:\n");
	scanf("%d", &tamanho);
	
	float matriz[tamanho][tamanho];
	for (int i = 0; i < tamanho; i++) {
		for (int j = 0; j < tamanho; j++) {
			printf("Informe o valor para o indice [%d][%d] da matriz:\n", i, j);
			scanf("%f", &matriz[i][j]);
		}
	}
	
	float menor = matriz[0][tamanho - 1];
	for (int i = 0; i < tamanho; i++) {
		for (int j = 0; j < tamanho; j++) {
			if (i + j == tamanho - 1 && matriz[i][j] < menor) {
				menor = matriz[i][j];
			}
		}
	}
	
	printf("\nMenor elemento da diagonal secundaria: %f\n", menor);	
}
