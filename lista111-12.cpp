#include <stdio.h>

/*
12. Faça um programa que receba o nome e duas notas
de seis alunos e mostre o relatório a seguir.
Relatório de notas:
Média da classe: ???
Percentual de alunos reprovados: ?%
Percentual de alunos de exame= ?% (Aluno em exame , média entre 5,0 e 7,0)
Percentual de alunos aprovados
*/

main() {
	char nomes[6][50];
	float notas[6][3];
	float soma = 0, pcReprovados, pcAprovados, pcExame, mediaClasse, media;
	int aprovados = 0, reprovados = 0, exame = 0;
	
	for (int i = 0; i < 6; i++) {
		fflush(stdin);
		printf("\nInforme o nome do aluno: ");
		gets(nomes[i]);
		for (int j = 0; j < 2; j++) {
			printf("Informe a nota %d de %s: ", j + 1, nomes[i]);
			scanf("%f", &notas[i][j]);
		}
		
		media = (notas[i][0] + notas[i][1]) / 2; // media das duas notas
		notas[i][2] = media;
		soma += media;
		
		if (media < 5) {
			reprovados += 1;
		} else if (media <= 7) {
			exame += 1;
		} else {
			aprovados += 1;
		}			
	}
	
	mediaClasse = soma / 6;
	pcAprovados = (aprovados / 6.) * 100;
	pcReprovados = (reprovados / 6.) * 100;
	pcExame = (exame / 6.) * 100;
	
	printf("\n\nRELATORIO DE NOTAS:\n");
	printf("Nome\tNota 1\tNota2\tMedia\n");
	for (int i = 0; i < 6; i++) {
		printf("%s\t", nomes[i]);
		for (int j = 0; j < 3; j++) {
			printf("%f\t", notas[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMedia da classe: %f\n", mediaClasse);
	printf("Aprovados: %f%%\n", pcAprovados);
	printf("Reprovados: %f%%\n", pcReprovados);
	printf("Exame: %f%%\n", pcExame);
	
	
}
