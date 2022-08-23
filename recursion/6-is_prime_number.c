#include "main.h"

/**
* is_prime_number - returns 1 if the input integer is a prime number, otherwise return 0
* @n: number to check
* Return: 1 if prime, 0 if not
*/

int is_prime_number(int n)
{
  return (check_prime(n, 1)); 
}

/**
* check_prime - check if the number is prime
* @num: the number to check if it is prime
* @i: the iterator to verified with
* Return: 1 if prime, o if not, or repeat if needed
*/

int check_prime(int num, int i) 
{
  if (num == i)
    {
      return (0); 
    }
  else if (num % i == 0)
    {
      return (1); 
    }
  else
    {
      return (check_prime(num, i + 1));     
    }
}
