#include "hash_tables.h"

/**
 * key_index - Gets the index of a key using the hash_djb2 function
 * @key: The key to get the index of
 * @size: The size of the array of the hash table
 *
 * Return: the index at which the key/value pair should be stored in hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
