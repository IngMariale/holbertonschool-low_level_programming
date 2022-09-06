#include "hash_table.h"
#include <stdio.h>
#include <stdlib.h>

/**
* hash_table_set - adds an element to the hash table.
* In case of collision, add the new node at the
* beginning of the list
* @ht: is the hash table you want to add or update 
* the key/value to
* @key: is the key. key can not be an empty string
* @value:  is the value associated with the key.
* value must be duplicated. value can be an empty string
* Returns: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
  
}
