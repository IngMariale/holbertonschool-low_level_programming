#include <stdio.h>
#include <unistd.h>

/**
 * main - print alphabeth lowercase and uppercase
 * Return: 0
 */

int main(void)
{
char ch = 'a', c = 'A';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
while (c <= 'Z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
