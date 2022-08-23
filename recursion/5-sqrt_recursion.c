#include "main.h"

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number
* Return: natural square root of a number
*/

int _sqrt_recursion(int n)
{

if (n == 0 || n == 1)
{
return (n);
}

if (n < 0)
{
return (-1);
}

return (root_check(n, 1));

}

/**
* root_check - finds the square root of a natural number
* @square: number from were will be find the square
* @root: integer checked to be the square of the number received (square)
* Return: the square root or -1 if there no natural square root
*/

int root_check(int square, int root)
{

if (square == (root * root))
{
return (root);
}
else if (root * root > square)
{
return (-1);
}
else
{
return (root_check(square, root + 1));
}

}
