#include <stdio.h>

/*
4) Crie um algoritmo para calcular o número pi a partir da série infinita abaixo. 
O algoritmo deve receber o número de termos que serão utilizados para 
calcular ??
pi = 4 - (4/3) + (4/5) - (4/7) + (4/9) - (4/11) + ....
*/

main() {
	int numeroTermos;
	float pi = 0, numerador = 4.0, denominador = 1.0;
	
	printf("Informe o numero de termos para calcular pi:\n");
	scanf("%d", &numeroTermos);
	
	while(numeroTermos < 1) {
		printf("O numero de termos tem que ser 1 ou mais:\n");
		scanf("%d", &numeroTermos);
	}
	
	for (int i = 1; i <= numeroTermos; i++) {
		pi += (numerador/denominador);
		numerador *= -1;
		denominador += 2;
	}
	
	printf("Pi: %f", pi);
}
