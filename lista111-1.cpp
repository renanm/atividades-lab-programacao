#include<stdio.h>

/*

Elabore um algoritmo que entre com valores reais para uma matriz M[2][3],
outra matriz P[2][3], gere e
imprima a matriz soma S.

*/

main() {
	float m[2][3], p[2][3], s[2][3];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("Informe um valor para m[%d][%d]\n", i, j);
			scanf("%f", &m[i][j]);
			printf("Informe um valor para p[%d][%d]\n", i, j);
			scanf("%f", &p[i][j]);
			s[i][j] = m[i][j] + p[i][j];
		}
	}
	
	printf("\nMatriz soma S:\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%f\t", s[i][j]);
		}
		printf("\n");
	}
		
}
