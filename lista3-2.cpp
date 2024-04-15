#include <stdio.h>
#include <stdlib.h>

/* 2. Faça um programa com uma função que recebe um número inteiro, verifica e retorna 1
se o número recebido é par e 0 se o número recebido é ímpar. */

int verificaPar(int num) {
	if (num % 2 == 0) {
		return 1;
	} else {
		return 0;
	}
}

main() {
	int num;
	printf("Informe um numero: ");
	scanf("%d", &num);
	printf("%d", verificaPar(num));
}
