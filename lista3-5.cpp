#include<stdio.h>

/*5. Fa�a um programa com uma fun��o que recebe dois n�meros inteiros e mostra a
multiplica��o entre eles.*/

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
