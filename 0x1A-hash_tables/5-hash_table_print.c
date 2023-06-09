#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: pointer to the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	int first_print = 1;
	hash_node_t *node = NULL;

	if (!ht)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];

		while (node)
		{
			if (first_print)
			{
				printf("'%s': '%s'", node->key, node->value);
				first_print = 0;
			}
			else
			{
				printf(", '%s': '%s'", node->key, node->value);
			}
			node = node->next;
		}
	}
	printf("}\n");
}
