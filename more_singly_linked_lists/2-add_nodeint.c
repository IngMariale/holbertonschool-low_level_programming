#include "lists.h"

/**
* add_nodeint - add new node at the beginning of the list
* @head: header from the list
* @n: integer
* Return: Head
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *beginning = NULL;

beginning = malloc(sizeof(listint_t));

if (beginning == NULL)
{
return (NULL);
}
beginning->n = n;
beginning->next = *head;
*head = beginning;
return (*head);
}
