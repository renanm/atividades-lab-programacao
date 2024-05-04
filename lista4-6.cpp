#include <stdio.h> 

/* 6) Calcule o valor da expressão “x2 - y + 10” por meio de um programa em C, seguindo as seguintes regras:
- o cálculo da expressão deve ser feito numa função do tipo void;
- utilize apenas variáveis locais;
- a leitura dos dados e exibição dos resultados deve ser feita em main(). */


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


