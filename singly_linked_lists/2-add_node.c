#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/**
* add_node - function that adds a new node at the beginning of a list_t list
* @head: pointer list
* @str: pointer char
* Return: i, number of nodes
*/

list_t *add_node(list_t **head, const char *str)
{
int i = 0;

list_t *ptr = malloc(sizeof(list_t));

if (ptr == NULL)
{
return (NULL);
}

for (; str[i]; i++)
;

ptr->str = strdup(str);

if (ptr->str == NULL)
{
free(ptr);
}

ptr->len = i;
ptr->next = *head;
*head = ptr;
return (*head);
}
