#include <stdio.h>

/* 1) O presidente da c�mara de uma cidade fez uma pesquisa sobre os seus habitantes, 
recolhendo dados sobre o sal�rio e n�mero de filhos. A c�mara deseja saber (2,5):
a) m�dia do sal�rio da popula��o;
b) m�dia do n�mero de filhos;
c) maior sal�rio;
d) percentagem de pessoas com sal�rio at� 500,00;
Crie uma fun��o que receba o sal�rio e o n�mero de filhos dos habitantes da cidade e retorne o 
resultado dos itens a, b, c e d. */


void pesquisaCamara(float salarios[], int filhos[], int n, float *mediaSalario, float *mediaFilhos, float *maiorSalario, float *pcAte500);

main() {
	float salarios[] = {1000., 345., 900., 233., 1340., 2900.};
	int filhos[] = {2, 1, 3, 2, 0, 1};
	float filhosTotal = 0, salarioTotal = 0, salarioAte500 = 0, pcAte500, mediaSalario, mediaFilhos, maiorSalario;
	int n = sizeof(filhos) / sizeof(filhos[0]);
	printf("%d\n\n", n);
	pesquisaCamara(salarios, filhos, n, &mediaSalario, &mediaFilhos, &maiorSalario, &pcAte500);
	printf("a) %f\n", mediaSalario);
	printf("b) %f\n", mediaFilhos);
	printf("c) %f\n", maiorSalario);
	printf("d) %f%\n", pcAte500);
}

void pesquisaCamara(float salarios[], int filhos[], int n, float *mediaSalario, float *mediaFilhos, float *maiorSalario, float *pcAte500) {
	float salarioTotal = 0, filhosTotal = 0, salarioAte500 = 0;
	for (int i = 0; i < n; i++) {
		salarioTotal = salarioTotal + salarios[i];
		filhosTotal = filhosTotal + filhos[i];
		if (salarios[i] <= 500) {
			salarioAte500 += 1;
		}
		
		if (i == 0) {
			*maiorSalario = salarios[i];
		} else if (salarios[i] > *maiorSalario) {
			*maiorSalario = salarios[i];
		}
	}
	
	*mediaSalario = salarioTotal / n;
	*mediaFilhos = filhosTotal / n;
	*pcAte500 = (salarioAte500 * 100) / n;

}
