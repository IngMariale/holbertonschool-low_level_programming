#include "lists.h"

/**
* *find_listint_loop - find the node of the beggining of the loop NOT WORKING
* @head: header from the list
* Return: address of the new node or null
*/

listint_t *find_listint_loop(listint_t *head)
{
unsigned int i = 0;
listint_t *temp = head;

if (head == NULL)
{
return (NULL);
} /*end if*/

while (i != 0)
{
temp = temp->next; /*move temp to the next position*/

if (temp == NULL)
{
return (NULL);
} /*END IF*/

i++;
} /*end while*/

return (temp);

} /*end insert_nodeint_at_index*/
