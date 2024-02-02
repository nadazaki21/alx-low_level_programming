#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the  hash table
 * @key: the key correspomding to a value, in a hash table node
 * @value: the value correspomding to a key, in a hash table node
 * Return: 1 on success, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    int index;

    const unsigned char *k = (const unsigned char *)k;

    index = key_index(k , ht->size);

    ht->array[index]->key = strdup(key); /* strdup uses malloc to allocate dynamic memory*/
    if (ht->array[index]->key == NULL)
    {
        return (0);
    }
    
    ht->array[index]->value = strdup(value);
    if (ht->array[index]->value == NULL)
    {
        return (0);
    }
    ht->array[index]->next = NULL;

    return (1);
}