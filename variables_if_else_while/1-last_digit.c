#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print the last digit of the ramdom number
 * Return: 0
 */

int main(void)
{
int n = 0, temp = 0;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is", n);
temp = n;

if (temp < 0)
{
temp = temp * -1;
}

while (temp > 9)
{
temp = temp % 10;
}

if (temp > 5)
{
printf(" %d and is greater than 5\n", temp);
}

if (temp == 0)
{
printf(" %d and is 0\n", temp);
}

if (temp < 6)
{
printf(" %d and is less than 6 and not 0\n", temp);
}

return (0);
}
