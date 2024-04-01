#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* 5. Escreva um programa que leia uma frase e conte quantas palavras existem na frase 
lida */

main() {
	char frase[101];
	int quantidadePalavras = 1, tamanho;
	
	printf("Informe a frase: ");
	gets(frase);
	tamanho = strlen(frase);
	
	for (int i = 0; i < tamanho; i++) {
		if (i != 0 && i != tamanho - 1) {
			if (isspace(frase[i]) && !isspace(frase[i + 1])) {
				quantidadePalavras++;
			}
		}
	}	
	
	printf("Quantidade de palavras: %d\n", quantidadePalavras);
	
	
}
	
	


