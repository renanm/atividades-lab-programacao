#include<ctype.h>
#include<stdio.h>

/* 4. Fa�a uma fun��o que leia um texto e converta este texto para mai�scula.
O texto deve ser 
passado para fun��o por refer�ncia.
*/

void maiuscula(char *texto) {
	int i = 0;
	while (texto[i] != '\0') {
		if (isalpha(texto[i]) != 0) {
			texto[i] = toupper(texto[i]);
		}
		i++;
	}
}

main() {
	char texto[] = "fdojowjg d f wpfpff pd43wo fv";
	maiuscula(texto);
	printf("%s", texto);
}
