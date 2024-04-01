#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* 2. Faça um programa que recebe uma frase, calcule e mostre a quantidade de letras ‘x’ da 
frase digitada. */

main() {
	char frase[101];
	int quantidade = 0, tamanho;
	
	printf("Informe a frase: ");
	gets(frase);
	tamanho = strlen(frase);
	
	for (int i = 0; i < tamanho; i++) {
		if (toupper(frase[i]) == 'X') {
			quantidade++;
		}
	}
	printf("Quantidade de x na frase: %d", quantidade);
}
	
	


