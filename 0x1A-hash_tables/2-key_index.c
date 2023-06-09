#include "hash_tables.h"

/**
 * key_index - computes index of a key
 * @key: pointer to key
 * @size: size of array of the hash table
 * Return: index where a hash node will be stored
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashed_key = hash_djb2(key);

	return (hashed_key % size);
}
