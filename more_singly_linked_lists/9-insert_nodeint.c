#include "lists.h"

/**
* *insert_nodeint_at_index -  inserts a new node at a given position
* @head: header from the list
* @idx: index of the list were node will be added
* @n: integer of nth nodes
* Return: address of the new node or null
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

listint_t *temp = *head;
listint_t *new_node =  malloc(sizeof(listint_t));

if (new_node == NULL || head == NULL )
{
return (NULL);
} /*end if*/

new_node->n = n;
new_node->next = NULL;

while (idx != 1)
{
temp = temp->next;
idx--;
} /*end while*/

new_node->next = temp->next;
temp->next = new_node;
return (new_node);

} /*end insert_nodeint_at_index*/
