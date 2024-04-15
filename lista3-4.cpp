#include <stdio.h>

/*4. Faça uma função que receba três números: a, b e c, onde a é maior que 1. A função
deve somar todos os inteiros entre b e c que sejam divisíveis por a (inclusive b e c) e
retornar o resultado para a função principal.*/

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
