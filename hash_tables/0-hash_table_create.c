#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *hash_table_create - function that creates a hash table.
* @size: is the size of the array
* Return: a pointer to the newly created hash table
* NULL if something went wrong
*/

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hashtable;

hashtable = malloc(sizeof(hash_table_t));

if (!hashtable)
{
return (NULL);
}

if (size == 0)
{
return (hashtable);
}

hashtable->array = malloc(sizeof(hash_node_t *) * size);

if (!hashtable->array)
{
return (NULL);
}

hashtable->size = size;
return (hashtable);
}
