#include <stdio.h>

/*
5) Faça um programa que leia N elementos de um vetor e um valor de código. 
Se o código for 1, mostrar o vetor na ordem direta, se o código for 2, 
mostrar o vetor na ordem inversa.
*/

main() {
	int tamanho, codigo;
	printf("Informe o tamanho:\n");
	scanf("%d", &tamanho);
	
	int vetor[tamanho];
	
	for (int i = 0; i < tamanho; i++) {
		printf("Informe um numero para o vetor:\n");
		scanf("%d", &vetor[i]);
	}
	
	printf("Informe o codigo (1 = Ordem direta; 2 = Ordem inversa):\n");
	scanf("%d", &codigo);	
	
	if (codigo == 1) {
		printf("\nVetor na ordem direta:\n");
		for (int i = 0; i < tamanho; i++) {
			printf("%d\n", vetor[i]);
		}
	} else if (codigo == 2) {
		printf("\nVetor na ordem inversa:\n");
		for (int i = tamanho - 1; i >= 0; i--) {
			printf("%d\n", vetor[i]);
		}		
	} else {
		printf("\nCodigo invalido");
	}
}
