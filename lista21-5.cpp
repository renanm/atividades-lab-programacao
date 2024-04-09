#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* 5. Elabore um programa que receba uma frase e mostre as letras que se
repetem, juntamente com o número de
repetições.
Exemplo: A PROVA FOI ADIADA
· A letra A apareceu 5 vezes
· A letra O apareceu 2 vezes
· A letra I apareceu 2 vezes
· A letra D apareceu 2 vezes */

main() {
	char letras[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // letras do alfabeto
	char letrasRepetidas[27]; // vai armazenar as letras que aparecem mais de uma vez
	int indicesRepetidas[27]; // vai armazenar os índices na array 'letras' das repetidas
	int numRepeticoes[26] = {0}; // array com o número de repetição de cada letra do alfabeto... começa toda zerada
	int contadorRepetidas = 0; // vai ajudar a preencher a array dos índices
	char frase[200]; // vai armazenar a frase a ser trabalhada
	
	printf("Informe uma frase:\n");
	gets(frase);
	
	
	for (int i = 0; frase[i] != '\0'; i++) { // percorre cada letra da frase
		for (int j = 0; j < 26; j++) { // para cada letra da frase, percorre todas as letras do alfabeto
			if (toupper(frase[i]) == letras[j]) { // quando chega na letra do alfabeto...
				if (numRepeticoes[j] == 1) { // caso esta letra já tenha sido usada uma vez...
					indicesRepetidas[contadorRepetidas] = j; //... o índice dela será armazenado
					contadorRepetidas++;
				}
				numRepeticoes[j]++; // mais uma repetição para a letra
				break; // não tem porque continuar iterando o alfabeto se já encontramos a letra
			}			
		}
	}
	
	int indice;
	for (int i = 0; i < contadorRepetidas; i++) {
		indice = indicesRepetidas[i];
		printf("A letra %c apareceu %d vezes\n", letras[indice], numRepeticoes[indice]);
	}
}
