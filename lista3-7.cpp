#include<stdio.h>

/*7. Faça um programa com uma função que receba como parâmetro um inteiro no
intervalo de 1 a 9 e mostre a seguinte tabela de multiplicação (no exemplo, n=9)*/

void tabelaMult(int n) {
	if (n < 1 || n > 9) {
		printf("Numero fora do intervalo");
		return;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d\t", i * j);
		}
		printf("\n");
	}
}

main() {
	int n;
	printf("Informe um numero entre 1 e 9: ");
	scanf("%d", &n);
	tabelaMult(n);	
}
