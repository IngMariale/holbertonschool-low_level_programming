#include "lists.h"
#include <stdio.h>

/**
* print_listint - Function that prints elements of a list
* @h: Pointer from structure
* Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
size_t number = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
number++;
}
return (number);
}
