#include "lists.h"

/**
* print_listint_safe - prints a linked list-NOT WORKING
* @head: Pointer from structure
* Return: number of nodes
*/

size_t print_listint_safe(const listint_t *head)
{

size_t number = 0;

while (head != NULL)
{
/* _putchar('0' + head->n);*/
/*_putchar('\n');*/

head = head->next;
number++;
}
return (number);
}
