#include "main.h"
#include <stdio.h>

/**
* main - prints the numbers from 1 to 100 and replaze multiple 3-5 Fizz-Buzz
* Return: 0
*/

int main(void)
{
int i = 0;

for (i = 1; i <= 100; i++)
{

if (i % 3 != 0 && i % 5 != 0)
{
printf("%d ", i);
}

if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else
{

if (i % 3 == 0)
{
printf("Fizz ");
}

if (i % 5 == 0)
{
printf("Buzz ");
}

}

}

printf("\n");
return (0);
}