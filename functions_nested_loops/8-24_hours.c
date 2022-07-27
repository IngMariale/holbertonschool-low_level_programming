#include "main.h"

/**
 * jack_bauer - minutes of the day of Jack Bauer, from 00:00 to 23:59
 */

void jack_bauer(void)
{
char i, j, k, l = '0';

for (; l <= '2'; l++)
{
for (k = '0'; k <= '9'; k++)
{
for (j = '0'; j <= '5'; j++)
{
for (i = '0'; i <= '9'; i++)
{
if (!((l == '2') && (k >= '4')))
{
_putchar(l);
_putchar(k);
_putchar(':');
_putchar(j);
_putchar(i);
_putchar('\n');
}
}
}
}
}
}
