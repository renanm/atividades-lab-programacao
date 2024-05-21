#include <stdio.h>
/*3. Fazer uma função que:
a. receba 3 ponteiros para números como parâmetros: A, B e C.
b. ordene de tal forma que, ao final da função, A contenha o menor número
e C o maior. A função 
deve usar os ponteiros para acessar os valores dos números por referência.
c. Fazer um programa que receba 3 números do usuário, chame a função
e mostre os números 
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
