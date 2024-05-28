#include<stdio.h>


/* 3) Elabore um algoritmo que apresente o menu de op��es a seguir, permita ao usu�rio 
escolher a op��o desejada, receba os dados necess�rios para executar a opera��o, e mostre 
o resultado. Cada op��o dever� ser uma fun��o. Verifique a possibilidade de op��o 
incorreta, e n�o se preocupe com restri��es como sal�rio negativo (4,0).
Menu de Op��es
1. Imposto
2. Novo sal�rio
3. Classifica��o
Inicialmente o programa recebe o valor do sal�rio normal sem horas extras, o n�mero de horas 
extras e a taxa de imposto (em %). Para constru��o do programa tem-se com base os c�lculos dos 
itens �a�, �b�, �c� e �d� a seguir. 
a) o valor das horas extras equivale ao n�mero de horas extras multiplicado por 7% 
do valor do sal�rio normal;
b) o sal�rio bruto equivale ao sal�rio normal mais o valor das horas extras;
c) o imposto � aplica��o da taxa de imposto sobre o sal�rio resultante em b);
d) o novo sal�rio equivale ao sal�rio bruto menos o imposto.
Ao escolher a op��o 3: Receber o novo sal�rio de um funcion�rio, e mostrar a sua 
classifica��o usando a tabela a seguir:
Sal�rio Percentual do imposto
At� R$ 1500,00 (inclusive) Mal remunerado
Maiores que R$ 1500,00 Bem remunerado */

void calculaImposto(float *salario, float *horas, float *pcImposto, float *imposto);
void calculaNovoSalario(float *salario, float *horas);
void calculaClassi(float *salario, float *horas, char classificacao[15]);

main() {
	float salario, horas, pcImposto, imposto;
	char classificacao[15];
	int opcao;
	printf("Informe o salario: ");
	scanf("%f", &salario);
	printf("Informe o numero de horas extras: ");
	scanf("%f", &horas);
	printf("Informe o percentual de impostos: ");
	scanf("%f", &pcImposto);
	printf("Escolha uma opcao:\n1 - Imposto\n2 - Novo salario\n3 - Classificacao\n");
	scanf("%d", &opcao);
	
	switch(opcao) {
		case 1:
			calculaImposto(&salario, &horas, &pcImposto, &imposto);
			printf("Imposto: %f", imposto);
			break;
		case 2:
			calculaNovoSalario(&salario, &horas);
			printf("Novo salario: %f", salario);
			break;
		case 3:
			calculaClassi(&salario, &horas, classificacao);
			printf("Classificacao: %s", classificacao);
			break;
		default:
			printf("Opcao invalida");
	}	
}

/* a) o valor das horas extras equivale ao n�mero de horas extras multiplicado por 7% 
do valor do sal�rio normal;
b) o sal�rio bruto equivale ao sal�rio normal mais o valor das horas extras;
c) o imposto � aplica��o da taxa de imposto sobre o sal�rio resultante em b);
d) o novo sal�rio equivale ao sal�rio bruto menos o imposto.
Ao escolher a op��o 3: Receber o novo sal�rio de um funcion�rio, e mostrar a sua 
classifica��o usando a tabela a seguir:
Sal�rio Percentual do imposto
At� R$ 1500,00 (inclusive) Mal remunerado
Maiores que R$ 1500,00 Bem remunerado */


void calculaImposto(float *salario, float *horas, float *pcImposto, float *imposto) {
	calculaNovoSalario(salario, horas);
	*imposto = *pcImposto * *salario / 100;
}

void calculaNovoSalario(float *salario, float *horas) {
	*salario = *salario + (*horas * *salario * 0.07);
}

void calculaClassi(float *salario, float *horas, char classificacao[]) {
	calculaNovoSalario(salario, horas);
	if (*salario <= 1500) {
		classificacao = "Mal remunerado";
	} else {
		classificacao = "Bem remunerado";
	}
}




