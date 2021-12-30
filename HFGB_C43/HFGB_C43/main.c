#include <stdio.h>
#include <stdlib.h>

int is_geom(double* array, unsigned array_size)
{
    int i;
    double q = array[1] / array[0];
    for (i = 0; i < array_size; i++)
    {
        if (array[i] / array[i - 1] != q)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    double arr[6] = { 1.0, 3.0, 9.0, 27.0, 81.0, 243.0 };
    double arr2[6] = { 1.0, -10.0, 9.0, 27.0, 81.0, 243.0 };

    if (is_geom(arr, 6) != 0)
        printf("arr is a geometric progression.");
    else
        printf("arr not is a geometric progression.");

    if (is_geom(arr2, 6) != 0)
        printf("arr2 is a geometric progression.");
    else
        printf("arr2 not is a geometric progression.");
    return 0;
}