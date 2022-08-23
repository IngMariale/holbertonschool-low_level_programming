#include "main.h"

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number
* Return: natural square root of a number
*/

int _sqrt_recursion(int n)
{
  
  int i = 1, result = 1;

  if (n == 0 || n == 1)
    {      
      return (n); 
    }

  if (n < 0)
    {
      return (-1);
    }

  while (result <= n)
    {
      i++;
      result = i * i;
    }

  i = i -1;
  result = i * i;
  
  if (result < n)
    {
      return (-1);
    }
  else
    {
     return (i);
    }
}
