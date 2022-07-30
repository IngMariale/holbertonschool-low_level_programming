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
list_t *ptr, *end;
end = *head;
ptr = malloc(sizeof(list_t));

if (ptr == NULL)
{
return (NULL);
}

for (; str[i]; i++)
;

ptr->str = strdup(str);
ptr->len = i;
ptr->next = NULL;

if (end == NULL)
{
*head = ptr;
}
else
{
while (end->next != NULL)
{
end = end->next;
}
end->next = ptr;
}
return (ptr);
}
