#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* 11. Fa�a um programa que receba uma frase com letras min�sculas e converta
a primeira letra de cada palavra para mai�scula.
Exemplo: fazer exerc�cios faz bem
Sa�da: Fazer Exerc�cios Faz Bem */

main() {
	char frase[200];
	
	printf("Informe a frase: ");
	gets(frase);
	
	int tamanho = strlen(frase);
	
	for (int i = 1; i < tamanho; i++) {
		if (i == 1) {
			frase[0] = toupper(frase[0]);
		} else if (frase[i - 1] == ' ') {
			frase[i] = toupper(frase[i]);
		}
	}
	
	printf("%s", frase);
}
