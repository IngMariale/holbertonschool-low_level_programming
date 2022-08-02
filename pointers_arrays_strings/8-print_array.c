#include "main.h"
#include <stdio.h>

/**
* print_array - prints n elements of an array of integers
* @a: pointer integer
* @n: number elements of the array
*/

void print_array(int *a, int n)
{
long int i = 0;

for (; i < n; i++)
{

if (i != (n - 1))
{
printf("%d, ", a[i]);
} /*end if*/
else
{
printf("%d\n", a[i]);
} /*end else*/

} /*end for*/

} /*end print_array*/
