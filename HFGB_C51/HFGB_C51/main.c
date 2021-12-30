#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

double _abs(double x)
{
	if (x > 0) return x;
	return -x;
}

void init_array(double* arr, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		arr[i] = rand() / ((double)RAND_MAX) * 2.0 - 1;
	}
}


void abw_dch_min_max(double* arr, int len, double* min, double* max, double* abw, double* dch)
{
	int i;
	double durchschnitt = 0.0;
	double sum_array = 0.0;
	double abweichung;
	double tmp_min = arr[0], tmp_max = arr[0];

	for (i = 0; i < len; i++)
	{
		sum_array += arr[i];
	}
	durchschnitt = sum_array / len;
	abweichung = _abs(durchschnitt - arr[0]);
	for (i = 0; i < len; i++)
	{
		if (abweichung < _abs(durchschnitt - arr[i]))
		{
			abweichung = _abs(durchschnitt - arr[i]);
		}
		if (arr[i] < tmp_min)
		{
			tmp_min = arr[i];
		}
		if (arr[i] > tmp_max)
		{
			tmp_max = arr[i];
		}
	}
	*dch = durchschnitt;
	*abw = abweichung;
	*max = tmp_max;
	*min = tmp_min;
}

int main()
{
	double arr[N];
	double min, max, abw, dch;

	srand(12345); // seed ist anzugeben (frueher war es 12345)
	//srand(time(0));

	init_array(arr, N);
	abw_dch_min_max(arr, N, &min, &max, &abw, &dch);

	printf("Groesste Abweichung: %lf\nDurchschnitt: %lf\nMinimum: %lf\nMaximum: %lf\n", abw, dch, min, max); // durchschnitt hilfte zu testen
	return 0;
}