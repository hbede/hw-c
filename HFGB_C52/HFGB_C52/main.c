#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void leastDist(double* x, double* y, int len, int* i_rem, int *j_rem, double *dist)
{
	int i, j, i_min, j_min;
	double distance, distance_min;
	distance_min = sqrt((x[0] - x[1]) * (x[0] - x[1]) + (y[0] - y[1]) * (y[0] - y[1]));
	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			if (i != j)
			{
				distance = sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
				if (distance < distance_min)
				{
					distance_min = distance;
					i_min = i;
					j_min = j;
				}
			}
		}
	}
	*i_rem = i_min;
	*j_rem = j_min;
	*dist = distance_min;
}

int main()
{
	double ptx[] = { 6.0, 1.5, 3.5, -4.0, -4.1, 10.0, 6.001, 8.1, 9.1, 10.6 };
	double pty[] = { 6.0, 1.5, 3.4, -4.0, -4.1, 100.0, 6.1, 8.1, 9.7, 10.4 };
	int i, j;
	double dist;

	leastDist(ptx, pty, 10, &i, &j, &dist);

	printf("Die Indexe der Koordinaten die am naehsten zueinander sind: %d, %d\nDer Abstand ist: %lf", i, j, dist);
	return 0;
}