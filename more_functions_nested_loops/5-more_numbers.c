#include "main.h"

/**
* more_numbers - prints 10 times the numbers, from 0 to 14
*/

void more_numbers(void)
{
char ch = '0';
int i = 0, j = 0;

for (; i < 10; i++)
{
ch = '0';
for (j = 0; j <= 14; j++)
{
if (j == 10)
{
ch = '0';
}
if (j >= 10)
{
_putchar('1');
}
_putchar(ch);
ch++;
}
_putchar('\n');
}
}
