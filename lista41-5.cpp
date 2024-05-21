#include <stdio.h>

/*5. Crie um programa para manipular vetores. O seu programa deve
implementar uma função
chamada inverte_vetor, que recebe como parâmetro dois vetores V1 e V2,
ambos de tamanho N. 
A função deve copiar os elementos de V1 para V2 na ordem inversa.
Ou seja, se a função receber 
V1 = {1,2,3,4,5}, a função deve copiar os elementos para V2 na seguinte ordem:
 V2 = {5,4,3,2,1}. 
Além disso, a função também deve retornar o maior valor encontrado em V1.
A função deve 
obedecer ao seguinte protótipo:
int inverte_vetor(int *v1, int *v2, int n);
*/

int inverte_vetor(int *v1, int *v2, int n);

main() {
	int v1[] = {3, 6, 3, 90, 12};
	int v2[5];
	int n = sizeof(v1) / sizeof(v1[0]);
	int maior = inverte_vetor(v1, v2, n);
}

int inverte_vetor(int *v1, int *v2, int n) {
	int temp[n];
	int maior;
	j=n-1;
	for (int i = 0; i < n; i++, j--) {
		v2[j] = v1[i];
		if (i == 0) {
			maior = v1[i];
		}
		if (v1[i] > maior) {
			maior = v1[i];
		}
}
