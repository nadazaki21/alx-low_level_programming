#include "hash_tables.h"
/**
 * key_index - generated the index at which the key  and value will be saved
 * @size: size of hash table (the array)
 * @key: the key corresponding to value, in a hash table node
 * Return: the index at which the values will be svaed
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
