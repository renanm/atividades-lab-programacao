#include<stdio.h>


/* 3) Elabore um algoritmo que apresente o menu de opções a seguir, permita ao usuário 
escolher a opção desejada, receba os dados necessários para executar a operação, e mostre 
o resultado. Cada opção deverá ser uma função. Verifique a possibilidade de opção 
incorreta, e não se preocupe com restrições como salário negativo (4,0).
Menu de Opções
1. Imposto
2. Novo salário
3. Classificação
Inicialmente o programa recebe o valor do salário normal sem horas extras, o número de horas 
extras e a taxa de imposto (em %). Para construção do programa tem-se com base os cálculos dos 
itens “a”, “b”, “c” e “d” a seguir. 
a) o valor das horas extras equivale ao número de horas extras multiplicado por 7% 
do valor do salário normal;
b) o salário bruto equivale ao salário normal mais o valor das horas extras;
c) o imposto é aplicação da taxa de imposto sobre o salário resultante em b);
d) o novo salário equivale ao salário bruto menos o imposto.
Ao escolher a opção 3: Receber o novo salário de um funcionário, e mostrar a sua 
classificação usando a tabela a seguir:
Salário Percentual do imposto
Até R$ 1500,00 (inclusive) Mal remunerado
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

/* a) o valor das horas extras equivale ao número de horas extras multiplicado por 7% 
do valor do salário normal;
b) o salário bruto equivale ao salário normal mais o valor das horas extras;
c) o imposto é aplicação da taxa de imposto sobre o salário resultante em b);
d) o novo salário equivale ao salário bruto menos o imposto.
Ao escolher a opção 3: Receber o novo salário de um funcionário, e mostrar a sua 
classificação usando a tabela a seguir:
Salário Percentual do imposto
Até R$ 1500,00 (inclusive) Mal remunerado
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




