#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @i: number received
 * Return: j, the last digit of the number i
 */

int print_last_digit(int i)
{
long int j = i;
char k = '0';

if (j < 0)
{
j = j * -1;
}
while (j > 9)
{
j %= 10;
}
k = '0' + j;
_putchar(k);
return (j);
}
