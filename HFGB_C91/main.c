#include <stdio.h>
#include <string.h>
#include <search.h>
#include <stdlib.h>

#define N 19

typedef struct critter
{
    char name[30];
    char species[30];
    int age;
} critter;

critter muppets[] = {
        { "Kermit", "frog", 5 },
        { "Piggy", "pig", 20 },
        { "Fozzie", "bear", 21 },
        { "Gonzo", "whatever", 33 },
        { "Rowlf ", "dog", 6 },
        { "Scooter ", "human", 34 },
        { "Pepe ", "king prawn", 9 },
        { "Rizzo ", "rat", 5 },
        { "Sam", "eagle", 12 },
        { "Robin", "frog", 22 },
        { "Animal", "animal", 54 },
        { "Camilla", "chicken", 84 },
        { "Sweetums", "monster", 34 },
        { "Dr. Strangepork", "pig", 83 },
        { "Link Hogthrob", "pig", 2 },
        { "Zoot", "human", 4 },
        { "Dr. Bunsen Honeydew", "human", 6 },
        { "Beaker", "human", 9 },
        { "Swedish Chef", "human", 4 }
};

void printCritter(struct critter* actual) {
        printf("%s is a %d years old %s.\n", actual->name, actual->age, actual->species);
}

void critter_sort_age(critter* mup, int size)
{
    int i, j, k;
    critter arr_tmp;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (mup[j].age > mup[j + 1].age)
            {
                arr_tmp = mup[j];
                mup[j] = mup[j + 1];
                mup[j + 1] = arr_tmp;
            }
            if (mup[j].age == mup[j + 1].age) /*falls alter gleich*/
            {
                for (k = 0; (k < (int)strlen(mup[j].name)) || (k < (int)strlen(mup[j + 1].name)); k++) /*abc folge prufen in wort*/
                {
                    if (mup[j].name[k] > mup[j + 1].name[k])
                    {
                        arr_tmp = mup[j];
                        mup[j] = mup[j + 1];
                        mup[j + 1] = arr_tmp;
                        break;
                    }
                    if (mup[j].name[k] < mup[j + 1].name[k]) break;
                }
            }
            
            
        }
    }
}

int main()
{
    int i;
    critter_sort_age(muppets, N);
    for (i = 0; i < N; i++)
    {
        printCritter(&muppets[i]);
    }  
    return 0;
}