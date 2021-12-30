#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//(x-5)(x+2)=x^2+2x-5x-10 1 -3 -10

int quadratisch(double a, double b, double c, double* x1_ret, double* x2_ret)
{
	double D;
	double x1 = 0, x2 = 0, x_tmp = 0;
	D = (b * b) - (4 * a * c);
	if (D < 0)
	{
		return 0;
	}
	if (D > 0)
	{
		x1 = (-1.0 * b + sqrt(D)) / (2 * a);
		x2 = (-1.0 * b - sqrt(D)) / (2 * a);
	}
	if (D == 0)
	{
		x1 = (-1.0 * b) / (2 * a);
		x2 = x1;
	}
	if (x2 > x1)
	{
		x_tmp = x2;
		x2 = x1;
		x1 = x_tmp;
	}
	*x1_ret = x1;
	*x2_ret = x2;
	if (D > 0)
	{
		return 2;
	}
	if (D == 0)
	{
		return 1;
	}
}

int main()
{
	double x1, x2;
	double a, b, c;
	printf("Geben Sie die Koeffizienten von der quadratischen Gleichung ax^2 + bx + c = 0\n");
	printf("a: ");
	scanf("%lf", &a);
	printf("b: ");
	scanf("%lf", &b);
	printf("c: ");
	scanf("%lf", &c);

	quadratisch(a, b, c, &x1, &x2);

	if (quadratisch(a, b, c, &x1, &x2) == 0)
	{
		printf("\nAnzahl der reellen Wurzeln: %d :(", quadratisch(a, b, c, &x1, &x2));
	}
	if (quadratisch(a, b, c, &x1, &x2) == 1)
	{
		printf("\nAnzahl der reellen Wurzeln: %d\n\nx = %lf", quadratisch(a, b, c, &x1, &x2), x1);
	}
	if (quadratisch(a, b, c, &x1, &x2) == 2)
	{
		printf("\nAnzahl der reellen Wurzeln: %d\n\nx1 = %lf\nx2 = %lf", quadratisch(a, b, c, &x1, &x2), x1, x2);
	}
	return 0;
}