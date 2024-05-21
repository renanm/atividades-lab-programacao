#include <stdio.h>

/*6. Fa�a um programa que leia tr�s valores inteiros
e chame uma sub-rotina que receba estes 3 
valores de entrada e retorne eles ordenados, ou seja,
o menor valor na primeira vari�vel, o 
segundo menor valor na vari�vel do meio, e o maior
valor na �ltima vari�vel. A rotina deve 
retornar o valor 1 se os tr�s valores forem iguais
e 0 se existirem valores diferentes. Exibir os 
valores ordenados na tela.
*/

int ordena(int *a, int *b, int *c) {
	if (a == b && b == c) {
		return 1;
	}
	int temp;
	while (*a > *b || *b > *c) {
		if (*a > *b) {
			temp = *a;
			*a = *b;
			*b = temp;
		}
		
		if (*b > *c) {
			temp = *b;
			*b = *c;
			*c = temp;		
		}
	}
	return 0;
}

main() {
	int a, b, c;
	printf("Informe A: ");
	scanf("%d", &a);
	printf("Informe B: ");
	scanf("%d", &b);
	printf("Informe C: ");
	scanf("%d", &c);
	ordena(&a, &b, &c);
	printf("%d, %d, %d", a, b, c);	
}
