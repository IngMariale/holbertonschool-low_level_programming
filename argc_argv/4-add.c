#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - program that adds positive numbers.
* Print the result, followed by a new line
* If no number is passed to the program, print 0,
* followed by a new line
* If one of the number contains symbols that are
* not digits, print Error, followed by a new line,
* and return 1
* You can assume that numbers and the addition of
* all the numbers can be stored in an int
* @argc: argument count
* @argv: argument vector
* Return: 0 or 1 if error
*/

int main(int argc, char *argv[])
{
int i = 1, j = 0, add = 0, temp = 0;
char *temp_argv;

for (; i < argc; i++)
{
temp_argv = argv[i];

for (; temp_argv[j]; j++)
{
if (temp_argv[j] < 48 || temp_argv[j] > 57)
{
printf("Error\n");
return (1);
}
}

temp = strtol(argv[i], argv, 10);

if (temp > 0)
{
add = add + temp;
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", add);

return (0);
}
