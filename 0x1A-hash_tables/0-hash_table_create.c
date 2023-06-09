#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of hash table
 * Return: pointer to a hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	/* Allocate memory for hash node items */
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
		return (NULL);

	/* Initialise hash node items to NULL */
	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	table->size = size;

	return (table);
}
