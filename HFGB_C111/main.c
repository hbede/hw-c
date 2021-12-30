#include <stdio.h>
#include <stdlib.h>

struct prime {

    unsigned n; /* die Primzahl: 2, 3, 5, ... */
    unsigned ind; /* 1, 2, 3, ... */

};

int isPrime(int zahl)
{
    int teiler;
    if (zahl == 0) return 0;
    if (zahl == 1) return 0;
    if (zahl == 2) return 1;
    if (zahl % 2 == 0) return 0;
    for (teiler = 3; teiler * teiler <= zahl; teiler += 2) if (zahl % teiler == 0) return 0;
    return 1;
}

void initPrime(struct prime* primes)
{
    int n, ind = 1, i = 0;
    for (n = 2; i < 100; n++)
    {
        if (isPrime(n) == 1)
        {
            primes[i].n = n;
            primes[i].ind = ind++;
            i++;
        }
    }
    return;
}

int numOf1s(int zahl)
{
    int i;
    int num = zahl;
    int ziff = 0;
    while (num != 0)
    {
        if (num % 10 == 1) ziff++;
        num /= 10;
    }
    return ziff;
}

int compare1s(const void * z1, const void * z2)
{
    struct prime* n1 = (struct prime*)z1;
    struct prime* n2 = (struct prime*)z2;
    int z1n = numOf1s(n1->n);
    int z2n = numOf1s(n2->n);
    int ret;
    if (z1n < z2n) return z1n - z2n;
    if (z1n > z2n) return z1n - z2n;
    return 0;
}


void printPrime(struct prime* primes)
{
    int i;
    for ( i = 0; i < 100; i++)
    {
        printf("%d ", primes[i].n);
    }
}

int main()
{
    struct prime primes[100];
    initPrime(&primes);
    printf("Unsorted primes:\n");
    printPrime(&primes);
    printf("\n\nSorted primes:\n");
    qsort(primes, 100, sizeof(struct prime), compare1s);
    printPrime(&primes);
    return 0;
}