#include <stdio.h>

/*
1) Escreva um programa que lê uma lista de inteiros positivos e imprime essa 
lista em ordem inversa. A lista pode ter até 100 elementos e a leitura deve 
ser interrompida assim que o primeiro inteiro não positivo ou quanto o 
centésimo elemento for digitado. Não será informado previamente o número 
de inteiros da lista.
*/

main() {
	int lista[100];
	int i = 0;
	
	for (i; i < 100; i++) {
		printf("Informe um numero:\n")/
		scanf("%d", &lista[i]);
		if (lista[i] <= 0) {
			break;
		}
	}
	
	printf("\nLista na ordem inversa:\n");
	while (i >= 0) {
		printf("%d\n", lista[i]);
		i--;
	}
}
