#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char* sortString(char* str)
{
    int i, j;
    char tmp;
    for (i = 0; i < strlen(str); i++)
    {
        for (j = 0; j < strlen(str)-i-1; j++)
        {
            if (str[j] > str[j+1])
            {
                tmp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = tmp;
            }
        }
    }
    return str;
}
int main() {

    char string[50];

    printf("Enter a string: ");
    scanf("%s", string);
    printf("Sorted string: %s", sortString(string));

    return 0;

}