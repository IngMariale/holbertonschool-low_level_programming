#include "lists.h"

/**
* free_listint_safe - frees a list -NOT WORKING
* @h: head of the list
* Return: size of the list
*/

size_t free_listint_safe(listint_t **h)
{
listint_t *temp;
size_t len = 0;

if (h == NULL || *h == NULL)
{
return (0);
}

while (*h != NULL)
{
temp = *h;
*h = (*h)->next;
free(temp);
len++;
}
*h = NULL;
return (len);
}
