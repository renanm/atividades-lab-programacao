#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* 3. Escreva um programa que leia uma string, conte quantos caracteres desta string são 
iguais a 'a' e substitua os que forem iguais a 'a' por 'b'. O programa deve imprimir o 
número de caracteres modificados e a string modificada. */

main() {
	char frase[101];
	int quantidade = 0, tamanho;
	
	printf("Informe a frase ou palavra: ");
	gets(frase);
	tamanho = strlen(frase);
	
	for (int i = 0; i < tamanho; i++) {
		if (frase[i] == 'A') {
			frase[i] = 'B';
			quantidade++;
		} else if (frase[i] == 'a') {
			frase[i] = 'b';
			quantidade++;
		}
	}
	printf("Frase modificada: %s\n", frase);
	printf("Quantidade modificados: %d", quantidade);
}
	
	


