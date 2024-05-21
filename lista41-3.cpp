#include <stdio.h>
/*3. Fazer uma fun��o que:
a. receba 3 ponteiros para n�meros como par�metros: A, B e C.
b. ordene de tal forma que, ao final da fun��o, A contenha o menor n�mero
e C o maior. A fun��o 
deve usar os ponteiros para acessar os valores dos n�meros por refer�ncia.
c. Fazer um programa que receba 3 n�meros do usu�rio, chame a fun��o
e mostre os n�meros 
ordenados.
*/

void ordena(int *a, int *b, int *c) {
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
