#include<stdio.h>

/*3) Faça uma função que receba 50 notas e seus respectivos pesos, calcule a média
ponderada dessas notas e retorne o resultado.
*/

float calcularMediaPonderada(float notas[50], float pesos[50) {
	float somaNotas = 0;
	float somaPesos = 0;
	float mediaPonderada;
	
	for (int i = 0; i < 50; i++) {
		somaNotas += notas[i] * pesos[i];
		somaPesos += pesos[i];
	}
	mediaPonderada = somaNotas / somaPesos;
	return mediaPonderada;
}

main() {
	float notas[50], pesos[50];
	for (int i = 0; i < 50; i++) {
		printf("Informe a nota (%d/50): ", i + 1);
		scanf("%f", &notas[i]);
		printf("Informe o peso da nota (%d/50): ", i + 1);
		scanf("%f", &pesos[i]);	
	}
	
	printf("%f", calcularMediaPonderada(notas, pesos));	
}
