#include <stdio.h>

/*
2) Escreva um programa que lê uma lista de inteiros e imprime os números 
pares. A lista pode ter até 100 elementos e a leitura deve ser interrompida 
assim que seja digitado -999 ou o centésimo elemento. Não será informado 
previamente o número de inteiros da lista.
*/

main() {
	int lista[100];
	int i = 0, j = 0;
	
	for (i; i < 100; i++) {
		printf("Informe um numero:\n");
		scanf("%d", &lista[i]);
		if (lista[i] == -999) {
			break;
		}
	}
	
	printf("\nNumeros pares da lista:\n");
	for (j; j < i; j++) {
		if (lista[j] % 2 == 0) {
			printf("%d\n", lista[j]);
		}
	}
}
