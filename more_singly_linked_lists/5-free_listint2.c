#include "lists.h"

/**
* free_listint2 - frees a list
* @head: header from list
*Return: -
*/

void free_listint2(listint_t **head)
{
listint_t *f;

if (head == NULL)
{
return;
}
while (*head)
{
f = (*head)->next;
free(*head);
*head = f;
}

*head = NULL;
}
