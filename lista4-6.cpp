#include <stdio.h> 

/* 6) Calcule o valor da express�o �x2 - y + 10� por meio de um programa em C, seguindo as seguintes regras:
- o c�lculo da express�o deve ser feito numa fun��o do tipo void;
- utilize apenas vari�veis locais;
- a leitura dos dados e exibi��o dos resultados deve ser feita em main(). */


void calculo(int *x, int *y, int *resultado);

main() {
	int x, y, resultado;
	printf("x: ");
	scanf("%d", &x);
	printf("y: ");
	scanf("%d", &y);
	calculo(&x, &y, &resultado);
	printf("Resultado: %d", resultado);
}

void calculo(int *x, int *y, int *resultado) {
	*resultado = (*x)* 2 - (*y) + 10;
}


