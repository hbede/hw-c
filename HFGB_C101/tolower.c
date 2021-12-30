#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#define EOF '@'

int main()
{
	char str[80];
	int i = 0;
	FILE* fp = stdin;
	while (1)
	{
		if ((str[i++] = tolower(fgetc(stdin))) == '\n')
		{
			str[i] = '\0';
			puts(str, stdout);
			i = 0;
		}
	}
	fclose(fp);
}