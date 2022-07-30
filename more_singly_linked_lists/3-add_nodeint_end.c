#include "lists.h"

/**
* add_nodeint_end - add node at the end of the list
* @n: integer variable
* @head: header
* Return: NULL if failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *node;
listint_t *m;

node = malloc(sizeof(listint_t));

if (node == NULL)
{
return (NULL);
}

node->n = n;
node->next = NULL;

if (*head == NULL)
{
*head = node;
return (*head);
}
else
{
m = *head;

while (m->next)
{
m = m->next;
}

m->next = node;

}

return (node);
}
