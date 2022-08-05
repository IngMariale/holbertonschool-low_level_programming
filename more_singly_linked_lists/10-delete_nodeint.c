#include "lists.h"

/**
* delete_nodeint_at_index -  deletes the node at index
* @head: header from the list
* @index: index of the list were node will be deleted
* Return: 1 or -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = *head, *prev = *head;
 
if (head == NULL) /*don't exist head 1*/
{
return (-1);
} /*end if-don't exist head 1*/

 for (i = 0; i <= index; i++) /*index in the middle*/
   {

     if (i == 0 && index == 0)
       {
	 *head = temp->next;

	 if (head == NULL)
	   {
	     return(-1);
	   }
	 
	 return(1);
	 free(temp);
       }
     else
       {

	 if(i == index - 1 && temp)
       {
	 prev = temp;
	 if (prev == NULL)
	   {
	     return (-1);
	   }
	 temp = temp->next;
	 prev->next = temp->next;
	 free(temp);
	 return (1);
       } /*end if*/
        else
       {
	 prev = temp;
	 
	 if(prev == NULL)
	   {
	     return(-1);
	   } /*end if */
	 
	 temp = temp->next;
       } /*end else*/
	 
       } /*end else*/
     
   } /*end for-index in the middle*/


return (1);

} /*end insert_nodeint_at_index*/
