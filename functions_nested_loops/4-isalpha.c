#include "main.h"

/**
* _isalpha - checks for alphabetic character
* @c: character
* Return: 0 is not and 1 if c is a letter
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
