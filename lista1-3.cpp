#include <stdio.h>


/*O custo ao consumidor de um carro novo é a soma do preço de fábrica com 
o percentual de lucro do distribuidor e dos impostos aplicados ao preço de 
fábrica. Faça um programa que receba o preço de fábrica de um veículo, o 
percentual de lucro do distribuidor e o percentual de impostos. Calcule e 
mostre:
a) o valor correspondente ao lucro do distribuidor;
b) o valor correspondente aos impostos;
c) o preço final do veículo*/


main() {
	float precoFabrica, precoFinal, percentualLucro, lucro, percentualImpostos, impostos;
	printf("Informe o preco de fabrica:\n");
	scanf("%f", &precoFabrica);
	printf("Informe o percentual de lucro do distribuidor:\n");
	scanf("%f", &percentualLucro);
	printf("Informe o percentual de impostos:\n");
	scanf("%f", &percentualImpostos);
	
	lucro = precoFabrica * (percentualLucro/100);
	impostos = precoFabrica * (percentualImpostos/100);
	precoFinal = precoFabrica + lucro + impostos;
	
	printf("a) Lucro do distribuidor: R$ %f\n", lucro);
	printf("b) Impostos: R$ %f\n", impostos);
	printf("c) Preco final: R$ %f\n", precoFinal);


	
	
}
