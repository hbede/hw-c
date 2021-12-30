#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int wordCounter(char *name)
{
    char c;
    int word_count = 0;
    FILE* fp = fopen(name, "rb");
    if (fp == NULL)
    {
        printf("FILE READ ERROR");
        return -1;
    }
    while ((c = fgetc(fp)) != EOF)
    {
            if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
            {
                word_count++;
                while (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')) c = fgetc(fp);
            }
    }
    fclose(fp);
    return word_count;
}

int main()
{
    printf("%d", wordCounter("input.dat"));
    return 0;
}