#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* * create_array - creates an array of chars,
* and initializes it with a specific char
* @size: size of the array
* @c: char that is inicialized with
* Return: pointer or null if size is 0 or fails
*/

char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *str;

if (size == 0)
{
return (NULL);
}

str = malloc(sizeof(char) * size);

if (str == NULL)
{
return (NULL);
}

for (; i < size; i++)
{
str[i] = c;
}

return (str);
}
