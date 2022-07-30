#include "lists.h"

/**
* sum_listint - returns sum of all data of the list
* @head: header from list
* Return: Sum or 0
*/

int sum_listint(listint_t *head)
{
unsigned int the_sum = 0;

if (head == NULL)
{
return (0);
}

while (head != NULL)
{
the_sum += head->n;
head = head->next;
}
return (the_sum);
}
