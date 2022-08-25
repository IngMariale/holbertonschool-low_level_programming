#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *str_concat - concatenates two strings.
* The returned pointer should point to a newly
* allocated space in memory which contains the
* contents of s1, followed by the contents of
* s2, and null terminated
* if NULL is passed, treat it as an empty string
* @s1: 1st string
* @s2: 2nd string
* Return: pointer of new string with both strings
* null if failure
*/

char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0, k = 0, l = 0;
char *concat_str;

if (s1 != NULL)
{
for (; s1[i]; i++)
{
}
}

if (s2 != NULL)
{
for (; s2[k]; k++)
{
}
}

concat_str = malloc(sizeof(char) * (i + k + 1));

if (concat_str == NULL)
{
return (NULL);
}

for (; j < i; j++)
{
concat_str[j] = s1[j];
}

for (l = j; l < (k + j); l++)
{
concat_str[l] = s2[l - j];
}

concat_str[l + 1] = '\0';
return (concat_str);
}
