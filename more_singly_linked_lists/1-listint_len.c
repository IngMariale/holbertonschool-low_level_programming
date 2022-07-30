#include "lists.h"

/**
* listint_len - return number of elements in a linked list
* @h: Pointer from structure
* Return: Numbers of elements
*/

size_t listint_len(const listint_t *h)
{
size_t i = 0;
while (h)
{
i++;
h = h->next;
}
return (i);
}
