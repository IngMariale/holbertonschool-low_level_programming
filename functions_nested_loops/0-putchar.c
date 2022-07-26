#include "main.h"

/**
* print_putchar - print putchar
* Return: 0
*/

int print_putchar(void)
{
int i = 0;
char content[] = "_putchar";

for(; content[i] != '\0'; i++)
_putchar(content[i]);

_putchar('\n');

return(0);
}
