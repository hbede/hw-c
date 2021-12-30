#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    int N = 0;

    int ziff;
    int n; //originalZahl
    int i = 0;
    int sum = 0;
    int zahl; //zahl mitzuarbeiten

    printf("Add the number of the digits: ");
    scanf("%d", &N);

    if (N <= 7)
    {
        for (n = pow(10, N - 1); n < pow(10, N); n++)
        {
            sum = 0;
            i = 0;
            zahl = n;

            while (zahl != 0)
            {
                ziff = zahl % 10;
                zahl = zahl / 10;
                sum += pow(ziff, N);
                i++;
            }

            if (sum == n)
            {
                printf("%d ", n);
            }
        }
    }
    else
    {
        printf("Du kannst hoechstens 7 eingeben.");
    }
    return 0;
}