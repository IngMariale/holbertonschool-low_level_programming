#include "main.h"

/**
* print_line - draws a straight line in the terminal
* @n: number of times _ is printed
*/

void print_line(int n)
{
int i = n;

for (; i > 0; i--)
{
_putchar('_');
}
_putchar('\n');
}
