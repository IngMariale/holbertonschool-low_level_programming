#include <stdio.h>
#include <unistd.h>

/**
 * main - print alphabeth lowercase in reverse
 * Return: 0
 */

int main(void)
{
char ch = 'z';
while (ch >= 'a')
{
putchar(ch);
ch--;
}
putchar('\n');
return (0);
}
