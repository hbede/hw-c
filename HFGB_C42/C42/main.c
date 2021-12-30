#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int _abs(int x)
{
    if (x > 0) return x;
    return -x;
}

int main() {
    unsigned int num1 = 0, num2 = 0;
    unsigned int distance = 0;

    int i = 0;
    int j = 0;
    unsigned int bin_arr[32];

    printf("Add the first number: ");
    scanf("%u", &num1);
    printf("Add the second number: ");
    scanf("%u", &num2);

    printf("Different digits: ");

    while (num1 || num2 > 0)
    {
        distance += _abs((num1 % 2) - (num2 % 2));
        if (_abs((num1 % 2) - (num2 % 2)) == 1)
        {
            bin_arr[j] = i;
            j++;
        }
        i++;
        num1 /= 2;
        num2 /= 2;
    }
    for (j; j > 0; j--)
    {
        printf("%u ", bin_arr[j-1]);
    }
    printf("\n");
    printf("Hamming-distance: %u", distance);
    return 0;
}