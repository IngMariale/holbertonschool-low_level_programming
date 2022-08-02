#include "main.h"
/*#include <stdio.h>*/

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
} /*end while*/

if (len % 2 == 0)
{

for (i = (len / 2); i < len; i++)
{
_putchar(str[i]);
} /*end for */

} /* end if*/
else
{

len2 = (len - 1) / 2;

for (i = (len - len2); i < len; i++)
{
_putchar(str[i]);
} /*end for*/

} /*end else*/
_putchar('\n');
/*printf("%d ", len);*/
/*printf("%d ", len2);*/
} /*end put_half*/
