#include <stdio.h>

/*4. Fa�a uma fun��o que receba tr�s n�meros: a, b e c, onde a � maior que 1. A fun��o
deve somar todos os inteiros entre b e c que sejam divis�veis por a (inclusive b e c) e
retornar o resultado para a fun��o principal.*/

int somaDiv(int a, int b, int c) {
	int soma = 0;
	while (b <= c) {
		if (b % a == 0) {
			soma += b;
		}
		b++;
	}
	return soma;
}

main() {
	int a = 0, b, c;
	while (a <= 1) {
		printf("Informe A: ");
		scanf("%d", &a);
	}
	printf("Informe B: ");
	scanf("%d", &b);
	printf("Informe C: ");
	scanf("%d", &c);
	
	printf("%d", somaDiv(a, b, c));
}
