#include <stdio.h> 

/* 2) Faça uma função que atualize o salário de um funcionário e retorne o bônus concedido de acordo com as 
seguintes regras:
- se salário maior ou igual que R$ 1.200,00, ganha bônus de 110,00
- se salário menor que R$ 1.200,00, ganha bônus de 190,00 */

void atualizaSalario(float *salario) {
	if (*salario >= 1200) {
		*salario = *salario + 110;
	} else {
		*salario = *salario + 190;
	}
}
