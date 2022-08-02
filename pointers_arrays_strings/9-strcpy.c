#include "main.h"

/**
* *_strcpy - copies string pointed to by src to the buffer pointed to by dest
* @dest: pointer destination
* @src: pointer copie from
* Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
int i = 0, len = 0;

while (src[len])
{
len++;
}

for (; i <= len; i++)
{
dest[i] = src[i];
}

return (dest);
}
