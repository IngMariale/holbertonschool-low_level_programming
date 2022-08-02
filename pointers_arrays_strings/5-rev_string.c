#include "main.h"

/**
* rev_string - reverse a string
* @s: string pointer
*/

void rev_string(char *s)
{
int len = 0, j = 0, temp = 0;

while (s[len] != '\0')
{
len++;
}

for (; j < (len / 2); j++)
{
temp = s[j];
s[j] = s[len - j - 1];
s[len - j - 1] = temp;
}

}
