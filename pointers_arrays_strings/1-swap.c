#include "main.h"

/**
* swap_int - swaps the values of two integers
* @a: integer
* @b: 2nd integer
*/

void swap_int(int *a, int *b)
{
int temp = 0;

temp = *b;
*b = *a;
*a = temp;
}
