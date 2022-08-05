#include "lists.h"

/**
* *reverse_listint - reverses a list NOT WORKING
* @head: the head of the list
* Return: pointer to the head of the new list
*/

listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *temp = NULL;

while (head != NULL)
{
/*temp = head->next;*/
/*head->next = prev;*/
prev = *head;
*head = temp;
}
*head = prev;
return (*head);
}
