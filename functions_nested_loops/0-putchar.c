#include "main.h"

/**
* main - print putchar
* Return: 0
*/

int main(void)
{
int i = 0;
char content[] = "_putchar";

for(; content[i] != '\0'; i++)
_putchar(content[i]);

_putchar('\n');

return(0);
}
