#include "lists.h"

/**
* get_nodeint_at_index - return nth node of a list
* @index: Unsigned integer (position of node)
* @head: header from list
* Return: NULL or nth node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int n = 0;

while (head != NULL)
{
if (n == index)
{
return (head);
}
head = head->next;
n++;
}
return (NULL);
}
