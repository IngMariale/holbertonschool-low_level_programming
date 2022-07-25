#include <stdio.h>
#include <unistd.h>

/**
 * main - print alphabeth
 * Return: 0
 */

int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
