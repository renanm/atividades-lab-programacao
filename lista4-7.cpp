#include<stdio.h>

void calcularEsfera(float r, float *area, float *volume);
float calcularPi();

main() {
	float r, area, volume;
	printf("Escolha o raio:");
	scanf("%f", &r);
	calcularEsfera(r, &area, &volume);
	printf("Volume: %f\n", volume);
	printf("Area: %f", area);
}

void calcularEsfera(float r, float *area, float *volume) {
	float pi = calcularPi();
	printf("%f", pi);
	*area = 4. * pi * (r * r);
	*volume = (4./3) * pi * (r * r * r);
}

float calcularPi() {
	float soma = 0.;
	for (int i = 0; i < 200; i++) {
		if (i % 2 == 0) {
			soma += 4./(i * 2 + 1);
		} else {
			soma -= 4./(i * 2 + 1);
		}
	}
	return soma;
}
