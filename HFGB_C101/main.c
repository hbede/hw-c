#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	char c = 0;
	char str[80];
	while (c != EOF)
	{
		c = fgetc(stdin);
		if (c >= 'a' && c <= 'z')
		{
			str[i] = c;
			i++;
		}
		if (c == '\n')
		{
			str[i] = '\0';
			fputs(str, stdout);
			printf("\n");
			i = 0;
		}
		
	}
	return 0;
}