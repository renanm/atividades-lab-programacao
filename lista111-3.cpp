#include<stdio.h>

/*

Elabore um algoritmo que entre com valores reais para uma matriz M[2][3],
gere e imprima a matriz
metade M

*/

main() {
	float m[2][3], metade[2][3];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("Informe um valor para m[%d][%d]\n", i, j);
			scanf("%f", &m[i][j]);
			metade[i][j] = m[i][j] / 2;
		}
	}
	
	printf("\nMatriz METADE:\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%f\t", metade[i][j]);
		}
		printf("\n");
	}
		
}
