#include "main.h"

/**
* _isdigit - checks for digits (0 to 9)
* @c: character
* Return: 0 if not and 1 if c is a digit
*/

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
