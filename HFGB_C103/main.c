#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

long int longestLine(char* name)
{
    char file[1000][1000];
    int i = 0, n, i_max = 0;
    int letter_count = 0;
    int letter_count_max = 0;
    FILE* fp = fopen(name, "r");
    if (fp == NULL)
    {
        printf("FILE READ ERROR");
        return -1;
    }
    while (fgets(file[i], sizeof(file[i]), fp) != NULL)
    {
        for (n = 0; n < (int)strlen(file[i]); n++)
        {
            if(file[i][n] != '\n') letter_count++;
        }
        i++;
        if (letter_count_max < letter_count)
        {
            letter_count_max = letter_count;
            i_max = i;
        }
        letter_count = 0;
    }
    fclose(fp);
    fprintf(stderr, "Longest line: %d\nCharacters: %d", i_max, letter_count_max);
    return 0;
}

int main()
{
    longestLine("ein.txt");
    return 0;
}