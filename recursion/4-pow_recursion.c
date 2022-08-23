#include "main.h"

/**
* _pow_recursion -  returns the value of x raised to the power of y
* @x: base
* @y: power
* Return: x at pow y
*/

int _pow_recursion(int x, int y)
{
int m;

if (y < 0)
{
return (-1);
} /*end if 1*/

if (y == 0)
{
return (1);
} /*end if 2*/

if (y % 2 == 0)
{
m = _pow_recursion(x, y / 2);
return (m *m);
} /*end if 3*/
else
{
return (x * _pow_recursion(x, y - 1));
} /*end else*/

} /*end _pow_recursion*/
