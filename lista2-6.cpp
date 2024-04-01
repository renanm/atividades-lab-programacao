#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* 6. Faça um programa que lê duas strings e as intercala, ou seja, “bola” e “jogo” fica 
“bjoolgao”. Apresente a string intercalada. */

main() {
	char frase1[101], frase2[101];
	int i = 0, j = 0, tamanho1, tamanho2;
	
	printf("Informe a frase 1: ");
	gets(frase1);
	tamanho1 = strlen(frase1);
	
	printf("Informe a frase 2: ");
	gets(frase2);
	tamanho2 = strlen(frase2);	
	
	while (i < tamanho1 || j < tamanho2) {
		if (i < tamanho1) {
			printf("%c", frase1[i]);
			i++;
		}
		if (j < tamanho2) {
			printf("%c", frase2[j]);
			j++;
		}
	}
}
	
	


