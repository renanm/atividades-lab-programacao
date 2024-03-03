#include <stdio.h>

/*
3) Escreva um programa que lê o tamanho e na sequência 2 vetores. Após a 
leitura o programa deve intercalar os valores dos dois vetores inteiros de 
mesmo tamanho em um terceiro vetor. Assuma que, a dimensão do terceiro
vetor é pelo menos duas vezes a dimensão de cada um dos outros vetores. No 
final imprima o novo vetor com os elementos intercalados.
*/

main() {
	int tamanho;
	printf("Informe o tamanho:\n");
	scanf("%d", &tamanho);
	
	int vetor1[tamanho], vetor2[tamanho], vetor3[tamanho * 2];
	
	for (int i = 0; i < tamanho; i++) {
		printf("Informe um numero para o vetor 1:\n");
		scanf("%d", &vetor1[i]);
		vetor3[i * 2] = vetor1[i];
		printf("Informe um numero para o vetor 2:\n");
		scanf("%d", &vetor2[i]);
		vetor3[i * 2 + 1] = vetor2[i];	
	}
	
	printf("\nVetor final intercalado:\n");
	for (int i = 0; i < tamanho * 2; i++) {
		printf("%d\n", vetor3[i]);
	}
}
