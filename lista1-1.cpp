#include <stdio.h>

main() {
	float notas[3], pesos[3], media, totalNotas, totalPesos;
	
	for (int i = 0; i < 3; i++) {
		printf("Informe a nota %d\n", i + 1);
		scanf("%f", &notas[i]);
		printf("Informe o PESO da nota %d\n", i + 1);
		scanf("%f", &pesos[i]);	
		totalNotas += notas[i] * pesos[i];
		totalPesos += pesos[i];
	}
	
	media = totalNotas / totalPesos;
	printf("Media ponderada: %f\n", media);
	
}
