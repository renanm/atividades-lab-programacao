#include <stdio.h>

void avaliarNotas(int tamanho, float *notas, float *media, float *menor, float *maior);

main() {
	float notas[] = {7.6, 8.4, 6.0, 2.4, 10.0, 9.4};
	float media, menor, maior;
	int tamanho = sizeof(notas) / sizeof(notas[0]);
	
	avaliarNotas(tamanho, notas, &media, &menor, &maior);
	
	printf("Media: %f\n", media);
    printf("Maior nota: %f\n", maior);
    printf("Menor nota: %f\n", menor);
}

void avaliarNotas(int tamanho, float *notas, float *media, float *menor, float *maior) {
	float soma = 0;
	
	for (int i = 0; i < tamanho; i++) {
		soma += notas[i];
		if (i == 0 || notas[i] > *maior) {
			*maior = notas[i];
		}
		
		if (i == 0 || notas[i] < *menor) {
			*menor = notas[i];
		}
	}
	
	*media = soma / tamanho;
}


