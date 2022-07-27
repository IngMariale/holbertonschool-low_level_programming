#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* add_node_end - adds a new node at the end of a list_t list
* @head: pointer list
* @str: pointer char
* Return: address or null
*/

list_t *add_node_end(list_t **head, const char *str)
{
int i = 0;
list_t *ptr, *temp;
ptr = *head;
ptr = malloc(sizeof(list_t));
temp = malloc(sizeof(list_t));

if(ptr == NULL)
{
free(ptr);
return (NULL);
}

for (; str[i]; i++)
;

temp->str = strdup(str);

if (temp->str == NULL)
{
free(temp);
}

temp->len = i + 1;

while (ptr->next != NULL)
{
ptr = ptr->next;
}

ptr->next = temp;

return (temp);
}
