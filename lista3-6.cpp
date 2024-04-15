#include<stdio.h>

/*6. Faça um programa com uma função que recebe dois números inteiros e retorna a
multiplicação entre eles. O programa principal deve mostrar o resultado da
multiplicação.*/

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
