#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct critter
{
    char name[30];
    char species[30];
    int age;
} critter;

void scanMuppets(struct critter* actual)
{
    char name[30];
    char species[30];
    int age;
    scanf("%s %s %d", name, species, &age);
    strcpy(actual->name, name);
    strcpy(actual->species, species);
    actual->age = age;
}

int main()
{
    int i;
    int crit_num;
    critter *muppet;

    printf("Enter the number of muppets: ");
    scanf("%d", &crit_num);

    muppet = (critter*)malloc(sizeof(critter) * crit_num);

    for (i = 0; i < crit_num; i++)
    {
        scanMuppets(&muppet[i]);
    }

    printf("The adult critters are:\n");
    for (i = 0; i < crit_num; i++)
    {
        if (muppet[i].age >= 18 && i != (crit_num - 1))
        {
            printf("%s, ", muppet[i].name);
        }

        if (muppet[i].age >= 18 && i == (crit_num - 1))
        {
            printf("%s", muppet[i].name);
        }
    }

    free(muppet);
    return 0;
}