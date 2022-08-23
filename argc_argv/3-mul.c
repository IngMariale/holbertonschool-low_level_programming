#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main -  multiplies two numbers.
* Your program should print the result of the
* multiplication, followed by a new line
* You can assume that the two numbers and result
* of the multiplication can be stored in an integer
* If the program does not receive two arguments,
* your program should print Error, followed by a
* new line, and return 1
* @argc: argument count
* @argv: argument vector
* Return: 0 or 1 if error
*/

int main(int argc, char *argv[])
{
int mul = 0, a = 0, b = 0;

if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
a = strtol(argv[1], argv, 10);
b = strtol(argv[2], argv, 10);
mul = a *b;
printf("%d\n", mul);
}

return (0);
}
