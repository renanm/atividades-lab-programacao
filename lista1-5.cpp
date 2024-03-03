#include <stdio.h>


/*Faça um algoritmo que receba o número de horas trabalhadas e o valor do 
salário mínimo. Calcule e mostre o salário a receber seguindo as regras 
abaixo:
a) a hora trabalhada vale 1/10 do salário mínimo;
b) o salário bruto equivale ao número de horas trabalhadas 
multiplicado pelo valor da hora trabalhada;
c) o imposto equivale a 3% do salário bruto;
d) o salário a receber equivale ao salário bruto menos o 
imposto.
*/

main() {
	float horasTrabalhadas, salarioMinimo, valorHorasTrabalhadas, salarioBruto, imposto, salarioLiquido;
	
	printf("Informe o numero de horas trabalhadas:\n");
	scanf("%f", &horasTrabalhadas);
	printf("Informe o salario minimo:\n");
	scanf("%f", &salarioMinimo);
	
	valorHorasTrabalhadas = salarioMinimo / 10;
	salarioBruto = valorHorasTrabalhadas * horasTrabalhadas;
	imposto = salarioBruto * 0.03;
	salarioLiquido = salarioBruto - imposto;
	
	printf("Salario a receber: %f", salarioLiquido);
	
}
