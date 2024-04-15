#include<stdio.h>

/*2) Faça uma função que receba três notas e seus respectivos pesos, calcule a média
ponderada dessas notas e retorne o resultado.*/

float calcularMediaPonderada(float notas[3], float pesos[3]) {
	float somaNotas = 0;
	float somaPesos = 0;
	float mediaPonderada;
	
	for (int i = 0; i < 3; i++) {
		somaNotas += notas[i] * pesos[i];
		somaPesos += pesos[i];
	}
	mediaPonderada = somaNotas / somaPesos;
	return mediaPonderada;
}

main() {
	float notas[3], pesos[3];
	for (int i = 0; i < 3; i++) {
		printf("Informe a nota (%d/3): ", i + 1);
		scanf("%f", &notas[i]);
		printf("Informe o peso da nota (%d/3): ", i + 1);
		scanf("%f", &pesos[i]);	
	}
	
	printf("%f", calcularMediaPonderada(notas, pesos));
	
}
