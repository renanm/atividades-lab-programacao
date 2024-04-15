#include <stdio.h>

float calculaSalario(float salarioBase);

main() {
	float salarioBase;
	printf("Informe o salario-base: ");
	scanf("%f", &salarioBase);
	printf("%f", calculaSalario(salarioBase));
}

float calculaSalario(float salarioBase) {
	float gratificacao = salarioBase * 0.05;
	float imposto = salarioBase * 0.07;
	return salarioBase + gratificacao - imposto;
}
