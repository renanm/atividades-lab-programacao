#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* 7. Fa�a um programa que l� uma string e conta e mostra quantos caracteres esta 
string possui (caracteres - \0).s */

main() {
	char frase[101];
	int tamanho;
	
	printf("Informe a frase: ");
	gets(frase);
	tamanho = strlen(frase);
	
	printf("Numero de caracteres: %d", tamanho);
}
