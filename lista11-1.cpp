#include <stdio.h>

/*
1) Escreva um programa que l� uma lista de inteiros positivos e imprime essa 
lista em ordem inversa. A lista pode ter at� 100 elementos e a leitura deve 
ser interrompida assim que o primeiro inteiro n�o positivo ou quanto o 
cent�simo elemento for digitado. N�o ser� informado previamente o n�mero 
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
