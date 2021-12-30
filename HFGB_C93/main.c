#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Point Point;

struct Point {
    float x;
    float y;
};
void scanCoords(struct Point* ptr)
{
	float x;
	float y;	
	scanf(" (%f, %f)", &x, &y);
	ptr->x = x;
	ptr->y = y;
}

void mostDist(Point** coords, int num)
{
	int i, j, i_max = 0, j_max = 0;
	float distance, distance_max;
	distance_max = 0;
	for (i = 0; i < num; i++)
	{
		for (j = i + 1; j < num; j++)
		{
			distance = sqrt((((*coords)[i].x - (*coords)[j].x) * ((*coords)[i].x - (*coords)[j].x)) + (((*coords)[i].y - (*coords)[j].y) * ((*coords)[i].y - (*coords)[j].y)));
			if (distance > distance_max)
			{
				distance_max = distance;
				i_max = i;
				j_max = j;
			}
		}
	}
	printf("These points are most distant from each other: (%.2f, %.2f) (%.2f, %.2f)", (*coords)[i_max].x, (*coords)[i_max].y, (*coords)[j_max].x, (*coords)[j_max].y);
	return;
}


int main()
{
    int xy_num;
	int i;
    Point *coords;
    printf("Enter the number of points: ");
    scanf("%d", &xy_num);

	coords = (Point*)malloc((float)(sizeof(Point) * xy_num));
	for (i = 0; i < xy_num; i++)
	{
		scanCoords(&coords[i]);
	}
	mostDist(&coords, xy_num);
	free(coords);
    return 0;
}