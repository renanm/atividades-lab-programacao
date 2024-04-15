#include<stdio.h>

/*1) Fa�a uma fun��o que receba tr�s notas e seus respectivos pesos, calcule e mostre a
m�dia ponderada dessas notas. Obs.: Veja no final desta lista como se faz a m�dia
ponderada*/

void calcularMediaPonderada(float notas[3], float pesos[3]) {
	float somaNotas = 0;
	float somaPesos = 0;
	
	for (int i = 0; i < 3; i++) {
		somaNotas += notas[i] * pesos[i];
		somaPesos += pesos[i];
	}
	printf("\n%f", somaNotas / somaPesos);
}

main() {
	float notas[3], pesos[3];
	for (int i = 0; i < 3; i++) {
		printf("Informe a nota (%d/3): ", i + 1);
		scanf("%f", &notas[i]);
		printf("Informe o peso da nota (%d/3): ", i + 1);
		scanf("%f", &pesos[i]);	
	}
	
	calcularMediaPonderada(notas, pesos);
	
}
