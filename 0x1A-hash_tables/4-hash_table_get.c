#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pinter to the hash table
 * @key: pointer to key
 * Return: value if found, NULL otherwise
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *current_node = NULL;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	/* check if a node in the list has same key and return value */
	current_node = ht->array[index];
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			return (current_node->value);
		}
		current_node = current_node->next;
	}
	return (NULL);
}
