#include<stdio.h>

/*

Elabore um programa em C/C++ que entre com 7 números inteiros
e imprima uma listagem contendo os 7
números.

*/

main() {
	int lista[7];
	for (int i = 0; i < 7; i++) {
		printf("Informe um valor para a posicao %d da lista\n", i);
		scanf("%d", &lista[i]);
	}
	
	printf("\nListagem dos numeros:\n");
	for (int i = 0; i < 7; i++) {
		printf("%d\t", lista[i]);
	}	
}
