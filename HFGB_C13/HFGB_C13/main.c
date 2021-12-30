#include <stdio.h>

//33 + 1*2 + 2*3 + 3*4 + ... + 98*99 + 99*100 = ?
int main()
{
	int a = 1;
	int b = 1;
	int sum = 33;
	for (a = 1; a <= 99; a++)
	{
		b++;
		sum = sum + a * b;
	}
	printf("%d", sum);
	
	return 0;
}