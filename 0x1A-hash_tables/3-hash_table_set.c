#include "hash_tables.h"

hash_node_t *create_node(const char *key, const char *value)
{
    hash_node_t *new_node = malloc(sizeof(hash_node_t));

    new_node->next = NULL;
    new_node->value = strdup(value);
    if (new_node->value == NULL)
        return (NULL);
    new_node->key = strdup(key);
    if (new_node->key == NULL)
        return (NULL);

    return (new_node);
}

void update_node(hash_table_t *ht, const char *value, int index)
{
    free(ht->array[index]->value);
    ht->array[index]->value = strdup(value);
}
/**
 * hash_table_set - adds an element to the  hash table
 * @key: the key correspomding to a value, in a hash table node
 * @value: the value correspomding to a key, in a hash table node
 * Return: 1 on success, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    int index;
    hash_node_t *new_node;

    if (!ht || !key)
		return (0);

    index = key_index((unsigned char *)key , ht->size);

    if (ht->array[index] != NULL)
    {
        update_node(ht, value, index);
    }
    else
    {
        new_node = create_node(key, value);
        if (new_node == NULL)
            return (0);

        ht->array[index] = new_node;
    }

    return (1);
}
