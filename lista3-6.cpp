#include<stdio.h>

/*6. Fa�a um programa com uma fun��o que recebe dois n�meros inteiros e retorna a
multiplica��o entre eles. O programa principal deve mostrar o resultado da
multiplica��o.*/

int mult(int a, int b) {
	return a * b;
}

main() {
	int a, b, produto;
	printf("Informe o primeiro numero: ");
	scanf("%d", &a);
	printf("Informe o segundo numero: ");
	scanf("%d", &b);
	produto = mult(a, b);
	printf("%d", produto);	
}
