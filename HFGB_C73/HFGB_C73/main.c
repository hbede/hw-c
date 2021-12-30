#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int isLatin(int latin[6][2])
{
	int i, j;
	int i_test, j_test;
	for (j = 0; j < 2; j++)
	{
		for (i = 0; i < 6; i++)
		{
			for (i_test = i + 1; i_test < 6; i_test++)
			{
				if (latin[i][j] == latin[i_test][j]) return 0;
			}
		}
	}
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 2; j++)
		{
			for (j_test = j + 1; j_test < 2; j_test++)
			{
				if (latin[i][j] == latin[i][j_test]) return 0;
			}
		}
	}
	return 1;
}

int main()
{
	int latin[6][2];
	int i = 0, j = 0;
	for (i = 0; i < 6; i++)
	{

		for (j = 0; j < 2; j++)
		{
			scanf("%d", &latin[i][j]);
		}
	}
	printf("\n");
	for (i = 0; i < 6; i++)
	{

		for (j = 0; j < 2; j++)
		{
			printf("%d ", latin[i][j]);
		}
		printf("\n");
	}

	if (isLatin(latin) == 1)
	{
		printf("\nThe given input is a latin square.");
	}
	else
	{
		printf("\nThe given input is not a latin square.");
	}


	return 0;
}