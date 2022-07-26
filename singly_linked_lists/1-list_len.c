#include "lists.h"
#include <stdio.h>

/**
* list_len - number of elements in a linked list
* @h: pointer list
* Return: i, number of nodes
*/

size_t list_len(const list_t *h)
{
size_t i = 0;

while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}
