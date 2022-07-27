#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{

long int i = 0, j = 0, k = 0, l = 0;

for (j = 0; j <= 9; j++)
{
for (i = 0; i <= 9; i++)
{
k = i * j;
if (k > 9)
{
l = k % 10;
k = k / 10;
_putchar(' ');
_putchar('0' + k);
_putchar('0' + l);
if (i != 9)
{
_putchar(',');
}
}
else
{
if (i != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar('0' + k);
if (i != 9)
{
_putchar(',');
}
}
}
_putchar('\n');
}
}
