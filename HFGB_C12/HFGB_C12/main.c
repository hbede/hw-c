#include <stdio.h>
int main()
{
	int x, y, z; //Pythagoras Zahlentripel
	for (z = 1; z <= 100; z++)
	{
		for (y = 1; y < 100; y++)
		{
			for (x = 1; x < 100; x++)
			{
				if (x * x + y * y == z * z && x < y)
				{
					printf("(%d;%d;%d)", x, y, z);
				}
			}
		}
	}
	return 0;
}