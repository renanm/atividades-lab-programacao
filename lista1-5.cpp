#include <stdio.h>


/*Fa�a um algoritmo que receba o n�mero de horas trabalhadas e o valor do 
sal�rio m�nimo. Calcule e mostre o sal�rio a receber seguindo as regras 
abaixo:
a) a hora trabalhada vale 1/10 do sal�rio m�nimo;
b) o sal�rio bruto equivale ao n�mero de horas trabalhadas 
multiplicado pelo valor da hora trabalhada;
c) o imposto equivale a 3% do sal�rio bruto;
d) o sal�rio a receber equivale ao sal�rio bruto menos o 
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
