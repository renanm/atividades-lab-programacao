#include <stdio.h>

/*
2) Escreva um programa que l� uma lista de inteiros e imprime os n�meros 
pares. A lista pode ter at� 100 elementos e a leitura deve ser interrompida 
assim que seja digitado -999 ou o cent�simo elemento. N�o ser� informado 
previamente o n�mero de inteiros da lista.
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
