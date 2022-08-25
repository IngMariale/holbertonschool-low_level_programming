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
int i = 0, j = 0, k = 0;
int **array;

array = malloc(sizeof(int *) * width);

if (array == NULL || width <= 0 || height <= 0)
{
return (NULL);
}

for (; i < width; i++)
{
array[i] = malloc(sizeof(int) * height);

if (array[i] == NULL)
{
return (NULL);
}

}

for (; j < width; j++)
{
for (k = 0; k < height; k++)
{
array[k][j] = 0;
}
}

return (array);
}
