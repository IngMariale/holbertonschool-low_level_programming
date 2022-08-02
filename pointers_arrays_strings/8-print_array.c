#include "main.h"
#include <stdio.h>

/**
* print_array - prints n elements of an array of integers
* @a: pointer integer
* @n: number elements of the array
*/

void print_array(int *a, int n)
{
int i = 0;

if (n <= 0)
{
printf("\n");
} /*end if*/

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
/* printf("%d %d ", n, i);*/
} /*end print_array*/
