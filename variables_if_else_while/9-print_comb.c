#include <stdio.h>

/**
* main - print all possible combinations of single-digit numbers
* Return: 0
*/

int main(void)
{
int i = '0';

for (; i <= '9' ; i++)
{
putchar(i);

if (i == '9')
{
}
else
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
