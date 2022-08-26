#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - frees a 2 dimensional grid
* @grid: double pointer created previusly
* @height: dimention of grid
*/

void free_grid(int **grid, int height)
{
int i = 0;

for (; i < height; i++)
{
free(grid[i]);
}

free(grid);
}
