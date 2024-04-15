#include<stdio.h>

/*5. Faça um programa com uma função que recebe dois números inteiros e mostra a
multiplicação entre eles.*/

void mult(int a, int b) {
	printf("%d", a * b);
}

main() {
	int a, b, produto;
	printf("Informe o primeiro numero: ");
	scanf("%d", &a);
	printf("Informe o segundo numero: ");
	scanf("%d", &b);
	mult(a, b);
}
