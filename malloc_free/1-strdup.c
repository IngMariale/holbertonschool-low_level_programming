#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *_strdup -  returns a pointer to a newly allocated
* space in memory, which contains a copy of the string
* given as a parameter.
* The _strdup() function returns a pointer to a new
* string which is a duplicate of the string str.
* Memory for the new string is obtained with malloc,
* and can be freed with free.
* @str: string given as a parameter to copy
* Return: pointer to duplicate string, NULL if str = NULL
* or insufficient memory available
*/

char *_strdup(char *str)
{
int i = 0, j = 0;
char *cp_str;

if (str == NULL)
{
return (NULL);
}

for (; str[i]; i++)
{
}

cp_str = malloc(sizeof(char) * (i + 1));

if (cp_str == NULL)
{
return (NULL);
}

for (; j < i; j++)
{
cp_str[j] = str[j];
}

return (cp_str);
}
