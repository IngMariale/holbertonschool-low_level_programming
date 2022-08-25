#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* **alloc_grid - function that returns a pointer
* to a 2 dimensional array of integers.
* Each element of the grid should be initialized to 0
* @width: 1st dimention variable
* @height: 2do dimention variable
* Return: pointer to array, NULL on failure, or when
* variables are 0 or negative
*/

int **alloc_grid(int width, int height)
{
int i = 0, j = 0, k = 0, l = 0;
int **array;

if (width <= 0 || height <= 0)
{
return (NULL);
}
array = (int **)malloc(sizeof(int *) * height);

if (array == NULL)
{
return (NULL);
}

for (; i < height; i++)
{
array[i] = (int *)malloc(sizeof(int) * width);

if (array[i] == NULL)
{
for (l = 0; l < i; l++)
{
free(array[l]);
}
free(array);
return (NULL);
} /*end if*/
} /*end for*/

for (; j < height; j++)
{
for (k = 0; k < width; k++)
{
array[j][k] = 0;
}
}
return (array);
}
