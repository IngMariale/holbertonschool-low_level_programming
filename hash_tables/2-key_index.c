#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
* key_index - function that gives you the index of a key.
* @key: key
* @size: size of the array of the hash table
* Return: index werebe store in the array of the hash table
*/

unsigned long int key_index(const unsigned char *key, __attribute__((unused)) unsigned long int size)
{
unsigned long int index = hash_djb2(key);

return (index);
}
