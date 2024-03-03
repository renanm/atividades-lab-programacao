#include <stdio.h>

main() {
	float salarioBase, salarioReceber;
	
	printf("Informe o salario base:\n");
	scanf("%f", &salarioBase);
	
	salarioReceber = salarioBase * 1.05 - salarioBase * 0.07;
	printf("Salario a receber: %f", salarioReceber);
}
