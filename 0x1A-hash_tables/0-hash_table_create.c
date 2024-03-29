#include "hash_tables.h"
/**
 * hash_table_create - returns pointer to newly created hash function
 * @size: the size of the needed hash table
 * Return: a pointer to tthe newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;

	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (NULL);

	if (size <= 0)
	{
		return (NULL);
	}

	ht->size = size;

	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;


	return (ht);
}
