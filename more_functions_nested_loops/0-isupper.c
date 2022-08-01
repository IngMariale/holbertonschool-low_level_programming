#include "main.h"

/**
* _isupper - checks for uppercase character
* @c: character
* Return: 0 is not and 1 if c is uppercase
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
