#include <stdio.h>
#include <string.h>
#include <ctype.h>


/* 4. Desenvolva um programa para ler uma string. Modifique a string de modo que o 
primeiro caracter passe para a última posição e desloque todos os outros caracteres uma 
posição para a esquerda. Imprima a string modificada. */

main() {
	char frase[101], fraseModificada[101];
	int quantidade = 0, tamanho;
	
	printf("Informe a frase ou palavra: ");
	gets(frase);
	tamanho = strlen(frase);
	
	for (int i = 0; i < tamanho; i++) {
		fraseModificada[i] = frase[(i + 1) % tamanho];
	}
	
	printf("Frase modificada: %s\n", fraseModificada);
	
	
}
	
	


