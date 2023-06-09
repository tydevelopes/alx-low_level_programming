#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		free_list(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}

/**
 * free_list - frees a list_t list
 * @head: pointer to begining of list
 */
void free_list(hash_node_t *head)
{
	hash_node_t *curr_node = NULL;

	while (head)
	{
		curr_node = head;
		head = head->next;
		free_node(curr_node);
	}
}
