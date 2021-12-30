#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int istPrim (int zahl)
{
    int teiler;

    if (zahl == 2) return 1;
    if (zahl % 2 == 0) return 0;
    for (teiler = 3; teiler*teiler <= zahl; teiler+=2)
    {
        if (zahl % teiler == 0)
        {
            return 0;
        }
    }
    return 1;
}

int* getPrimes(unsigned int N)
{
    int i, j = 0;
    int* array;
    array = (int*)malloc((sizeof(int))*N);
    for (i = 2; j < N; i++)
    {
        if (istPrim(i) == 1)
        {
            array[j] = i;
            j++;
        }
    }
    return array;
}

int main()
{

    int *parray=NULL;
    int N = 0, i = 0;

    printf("Add the number of primes: ");
    scanf("%d", &N);

    parray = getPrimes(N);

    for (i = 0; i < N; i++)
    {
        printf("%d ", parray[i]);
    }

    free(parray);

    return 0;

}