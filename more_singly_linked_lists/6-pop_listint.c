#include "lists.h"

/**
* pop_listint - deletes the head of a list and return his data
* @head: header from list
* Return: 0 o data of the head
*/

int pop_listint(listint_t **head)
{
listint_t *the_head = *head;
int node = 0;

if (*head == NULL)
{
return (0);
}
node = the_head->n;
*head = (*head)->next;
free(the_head);
return (node);
}
