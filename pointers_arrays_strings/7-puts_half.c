#include "main.h"

/**
* puts_half - prints half of a string, followed by a new line
* @str: pointer string
*/

void puts_half(char *str)
{
int len = 0, len2 = 0, i = 0;

while (str[len])
{
len++;
}

len2 = (len - 1) / 2;

for (i = (len - len2 - 1); i < len; i++)
{
_putchar(str[i]);
}

_putchar('\n');

}
