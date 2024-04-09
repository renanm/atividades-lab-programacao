#include <stdio.h>
#include <stdlib.h>

/* 3. Faça uma função que receba dois números positivos por parâmetro e retorne a soma
dos n números inteiros existentes entre eles. */

int somaEntre(int num1, int num2) {
	int dif, menor, maior;
	int soma = 0;
	if (num1 > num2) {
		dif = num1 - num2;
		menor = num2;
		maior = num1;
	} else {
		dif = num2 - num1;
		menor = num1;
		maior = num2;
	}
	
	for (int i = menor + 1; i < maior; i++) {
		soma += i;
	}
	return(soma);
}

main() {
	int num1, num2, soma;
	printf("Informe um numero: ");
	scanf("%d", &num1);
	printf("Informe outro numero: ");
	scanf("%d", &num2);
	soma = somaEntre(num1, num2);
	printf("%d", soma);
}
