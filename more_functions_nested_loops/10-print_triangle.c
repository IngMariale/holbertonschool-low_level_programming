#include "main.h"

/**
* print_tringle - print a triangle
* @size: size of the triangle
*/

void print_triangle(int size)
{
int i = 0, j = 0, k = size;

if (size > 0)
{

for (; k > 0; k--)
{

for (j = (k - 1); j > 0; j--)
{
_putchar(' ');
}

for (i = 0; i <= (size - k); i++)
{
_putchar('#');
}

_putchar('\n');

}

}
else
{
_putchar('\n');
}

}
