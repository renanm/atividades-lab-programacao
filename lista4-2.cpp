#include <stdio.h> 

/* 2) Fa�a uma fun��o que atualize o sal�rio de um funcion�rio e retorne o b�nus concedido de acordo com as 
seguintes regras:
- se sal�rio maior ou igual que R$ 1.200,00, ganha b�nus de 110,00
- se sal�rio menor que R$ 1.200,00, ganha b�nus de 190,00 */

void atualizaSalario(float *salario) {
	if (*salario >= 1200) {
		*salario = *salario + 110;
	} else {
		*salario = *salario + 190;
	}
}
