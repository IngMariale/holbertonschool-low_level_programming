#include "main.h"

/**
* _strlen - count length string
* @s: string
* Return: length of string
*/

int _strlen(char *s)
{
int i = 0;

for (; s[i]; i++)
{
}
return (i);
}

/**
* _puts_recursion - prints a string, followed by a new line
* @s: string
*/

void _puts_recursion(char *s)
{

if (_strlen(s) == '\0')
{
_putchar('\n');
return;
}

_putchar(s[0]);
_puts_recursion(s + 1);
}
