#include <stdio.h>

//n! = n*(n-1)*(n-2)*...*2*1
//6! = 6*5*4*3*2*1 = 720

int funkt_fakultaet(unsigned long zahl)
{
	unsigned long lv = 0;
	unsigned long fakultaet = 1;
	if(zahl == 0)
	{ 
		fakultaet = 1;
	}
	else 
	{
		while (lv != zahl - 1)
		{
			fakultaet = fakultaet * (zahl - lv);
			lv++;
		}
	}	
	return fakultaet;
}

//(n über k) = n! / ( k! * (n-k)! ) wo n = 0, 1, 2... und k = 0, 1, 2...
int main()
{
	unsigned long n; //zeile
	unsigned long k; //elemente
	unsigned long z; //k-te element der n-ten zeile
	for (n = 0; n <= 10; n++)
	{
		for (k = 0; k <= n; k++)
		{
			z = funkt_fakultaet(n) / ((funkt_fakultaet(k)) * (funkt_fakultaet(n - k)));
			printf("%5lu", z);
		}
		printf("\n");
	}
	return 0;
}
