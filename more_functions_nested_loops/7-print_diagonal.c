#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal
* @n: number of times \ is printed
*/

void print_diagonal(int n)
{
int i = n, j = 0;

if (n > 0)
{

for (; i > 0; i--)
{

for (j = 0; (n - j) > i; j++)
{
_putchar(' ');
}

_putchar('\\');
_putchar('\n');
}

}
else
{
_putchar('\n');
}
}
