#include "lists.h"

/**
* free_listint - free a list
* @head: header from list
*/

void free_listint(listint_t *head)
{
listint_t *fre;

while (head)
{
fre = head;
head = head->next;
free(fre);
}
free(head);
}
