#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @i: integer received
 * Return: i, the absolute value of the integer
 */

int _abs(int i)
{
if (i < 0)
{
i = i * -1;
}
return (i);
}
