#include<stdio.h>

/* 1. Escreva uma fun��o CALCULA que: 
a. receba como par�metros duas vari�veis inteiras, X e Y; 
b. retorne em X a soma de X e Y; 
c. retorne em Y a subtra��o de X e Y */

void calcula(int *x, int *y) {
	int soma = *x + *y;
	int sub = *x - *y;
	*x = soma;
	*y = sub;
	printf("%d\n%d", *x, *y);
}
