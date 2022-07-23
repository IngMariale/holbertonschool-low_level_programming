#include <stdio.h>

/**
 * main - print the size of the type of variables
 * Return: 0
 */

int main(void)
{

int intType;
float floatType;
char charType;
long int longintType;
long long int longlongintType;

printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longintType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
