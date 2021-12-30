#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(const char* s)
{
    int i, j;
    char* inv = (char*)malloc(strlen(s) * sizeof(char) + 1);
    for (i = strlen(s) - 1, j = 0; i >= 0; i--, j++)
    {
        inv[i] = s[j];
        if (inv[i] != s[i]) return 0;
    }
    inv[j] = '\0';
    return 1;
}

int main() {

    char string[50];

    printf("Enter a string: ");
    scanf("%s", string);

    if (isPalindrome(string))
    {
        printf("The given string is a palindrome string.");
    }
    else
    {
        printf("The given string is not a palindrome string");
    }

    return 0;

}