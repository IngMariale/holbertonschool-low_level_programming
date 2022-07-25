#include <stdio.h>
#include <unistd.h>

/**
 * main - print alphabeth
 * Return: 0
 */

int main(void)
{
int ch = '1';
while (ch <= '9')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
