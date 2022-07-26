#include "main.h"

/**
* print_alphabet_x10 - print 10 times the alphabet in lowercase with a new line
*/

void print_alphabet_x10(void)
{
char ch = 'a';
int i = 0;

for (; i < 10; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
