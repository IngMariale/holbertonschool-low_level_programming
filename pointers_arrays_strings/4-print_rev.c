#include "main.h"
#include <unistd.h>
#include <string.h>

/**
* print_rev - prints a string, in reverse
* @s: pointer of the string
*/

void print_rev(char *s)
{
int j = 0, i = 0;

j = strlen(s);

for (i = j; i >= 0; i--)
{
_putchar(s[i]);
}

_putchar('\n');
}
