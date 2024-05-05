#include <stdio.h>
#include <math.h>

int raizesReais (float a, float b, float c, float *x1, float *x2);

main() {
	float a, b, c, x1, x2;
	printf("a: ");
	scanf("%f", &a);
	printf("b: ");
	scanf("%f", &b);
	printf("c: ");
	scanf("%f", &c);
	raizesReais (a, b, c, &x1, &x2);
	printf("%f\n", x1);
	printf("%f", x2);
}

int raizesReais (float a, float b, float c, float *x1, float *x2) {
	float delta = (b * b) - (4 * a * c);
	if (delta <= 0) {
		return 0;
	}
	
	*x1 = ((b * (-1)) - sqrt(delta))/ (2 * a);
	*x2 = ((b * (-1)) + sqrt(delta))/ (2 * a);
	return 1;
}
