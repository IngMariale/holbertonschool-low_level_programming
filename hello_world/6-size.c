#include <stdio.h>

/**
 * main - print the size of the type of variables 
 * Return: 0
 */

int main()
{

int intType;
float floatType;
char charType;
long int longintType;
long long int longlongintType;

printf("Size of char: %zu byte(s)\n", sizeof(charType));
printf("Size of int: %zu byte(s)\n", sizeof(intType));
printf("Size of long int: %zu byte(s)\n", sizeof(longintType));
printf("Size of long long int: %zu byte(s)\n", sizeof(longlongintType));
printf("Size of float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
