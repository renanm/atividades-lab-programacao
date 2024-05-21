
/* 2. Escreva uma função que recebe como parâmetros um vetor de inteiros v,
o número de 
elementos dele N e ponteiros para variáveis nas quais devem ser armazenados
os valores 
maximo e minimo do vetor. Sua assinatura deve ser:
void maximoMinimo(int *v, int N, int *maximo, int *minimo) */

void maximoMinimo(int *v, int N, int *maximo, int *minimo) {
	for (int i = 0; i < N; i++) {
		if (i == 0) {
			*maximo = v[i];
			*minimo = v[i];
		}
		if (v[i] < *minimo) {
			*minimo = v[i];
		} else if (v[i] > *maximo) {
			*maximo = v[i];
		}
	}
}

