#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print the last digit of the ramdom number
 * Return: 0
 */

int main(void)
{
int n = 0, nega = 0;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is", n);

if (n < 0)
{
nega = n * -1;
}
else
nega = n;

while (nega > 9)
{
nega = nega % 10;
}

if (n < 0)
{
nega = nega * -1;
}

if (nega > 5)
{
printf(" %d and is greater than 5\n", nega);
}

if (nega == 0)
{
printf(" %d and is 0\n", nega);
}

if (nega < 6 && nega != 0)
{
printf(" %d and is less than 6 and not 0\n", nega);
}

return (0);
}
