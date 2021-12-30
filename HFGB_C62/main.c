#include <stdio.h>

int is_geom(double *array, unsigned array_size)
{
    int i;
    double q = array[1]/array[0];
    for (i = 1; i < array_size; i++)
    {
        if (array[i]/array[i-1] != q )
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    double arr[6] = {1.98319, 3.0, 9.0, 27.0, 81.0, 243.0};
    double arr2[6] = {20.0, 10.0, 5.0, 2.5, 1.25, 0.625};

    if(is_geom(arr, 6) != 0)
        printf("arr is a geometric progression.\n");
    else
        printf("arr is not a geometric progression.\n");

    if(is_geom(arr2, 6) != 0)
        printf("arr2 is a geometric progression.\n");
    else
        printf("arr2 is not a geometric progression.\n");
        return 0;
}