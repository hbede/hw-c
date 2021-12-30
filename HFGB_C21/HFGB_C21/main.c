#include <stdio.h>

int main()
{
	//100-999; %7 == 0; ziff10 == ziff1
	int zahl;
	int ziff1, ziff10, ziff100;
	for (zahl = 100; zahl <= 999; zahl++)
	{
		ziff100 = zahl / 100;
		ziff10 = (zahl - (zahl / 100) * 100) / 10;
		ziff1 = zahl % 10;
		if (zahl % 7 == 0 && ziff10 == ziff1)
		{
			printf("%d ", zahl);
		}
	}

	return 0;
}