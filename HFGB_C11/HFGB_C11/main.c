//The following define is neccessary to prevent errors in Visual Studio

// Microsoft made changes to the standard C, and scanf() would not work without defining _CRT_SECURE_NO_WARNINGS.

// You are allowed declare new functions,
// but you are not allowed to change the existing code in the main function.

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int j; //variable in "for"
    int i; //input
    int teiler;

    printf("Please enter a positive integer\n");
    scanf("%d", &i);
    teiler = i;

    for ( j = 0; j < i; j++)
    {
        if (i % teiler == 0)
        {
            printf("%d ", i / teiler);
        }
        teiler--;
    }

    return 0;
}