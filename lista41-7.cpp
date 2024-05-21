#include<stdio.h>

/*7. Escreva uma função que aceita como parâmetro
um vetor de inteiros com n valores, e 
determina o maior elemento do vetor e o numero de
vezes que este elemento ocorreu no vetor. 
Por exemplo, para um vetor com os seguintes
elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15, a função
deve retornar para o programa que a chamou o
valor 15 e o número 3 (indicando que o numero 
15 ocorreu 3 vezes). A função deve ser do tipo void.
*/

void contaMaior(int *v, int tamanho, int *maior, int *vezes) {
	for (int i = 0; i < tamanho; i++) {
		if (i == 0) {
			*maior = v[i];
			*vezes = 1;
		} else if (v[i] > *maior) {
			*maior = v[i];
			*vezes = 1;
		} else if (v[i] == *maior) {
			*vezes += 1;
		}
	}
}

main() {
	int v[] = {5, 2, 15, 3, 7, 15, 8, 6, 15};
	int maior, vezes;
	int tamanho = sizeof(v) / sizeof(v[0]);
	printf("%d\n", tamanho);
	contaMaior(v, tamanho, &maior, &vezes);
	printf("%d\n%d", maior, vezes);
}
