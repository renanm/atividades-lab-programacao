#include <stdio.h>
#include <stdlib.h>

/* 2. Fa�a um programa com uma fun��o que recebe um n�mero inteiro, verifica e retorna 1
se o n�mero recebido � par e 0 se o n�mero recebido � �mpar. */

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
