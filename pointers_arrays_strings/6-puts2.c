#include "main.h"
#include <unistd.h>
#include <string.h>

/**
* puts2 - prints every other character of a string, since the 1st
* @str: pointer of the string
*/

void puts2(char *str)
{
int i = 0, len = 0;

while (str[len])
{
len++;
} /*end while*/

for (; i < len; i++)
{

if (i % 2 == 0)
{
_putchar(str[i]);
} /* end if*/

} /*end for*/

_putchar('\n');
} /*end puts2*/
