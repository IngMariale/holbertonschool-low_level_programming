#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -  prints all natural numbers from n to 98
 * @n: number since when will count to 98
 */

void print_to_98(int n)
{
int j = 0, i = n;

if (i == 98)
{
printf("98\n");
}
if (i < 98)
{
for (j = i; j <= 98; j++)
{
if (j != 98)
{
printf("%d, ", j);
}
else
{
printf("98\n");
}
}
}
if (i > 98)
{
for (j = i; j >= 98; j--)
{
if (j != 98)
{
printf("%d, ", j);
}
else
{
printf("98\n");
}
}
}
}
