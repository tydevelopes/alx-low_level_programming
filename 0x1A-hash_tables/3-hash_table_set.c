#include "hash_tables.h"

/**
 * hash_table_set - adds element to the hash table
 * @ht: pinter to the hash table
 * @key: pointer to key
 * @value: pointer to value
 * Return: 1 if success, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *node = NULL, *head = NULL, *current_node = NULL;

	if (!ht)
		return (0);

	node = create_node(key, value);
	if (!node)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	/* Add node if node at index is NULL */
	if (!ht->array[index])
	{
		ht->array[index] = node;
		return (1);
	}
	/* check if a node in the list has same key and update */
	head = ht->array[index];
	current_node = ht->array[index];
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			current_node->value = realloc(current_node->value, strlen(value) + 1);
			strcpy(current_node->value, value);
			/* Free unused node created */
			free_node(node);
			return (1);
		}
		current_node = current_node->next;
	}
	/* key doesn't exist so add node to beginning of list */
	node->next = head;
	ht->array[index] = node;

	return (1);
}

/**
 * create_node - creates a hash node
 * @key: pointer to key
 * @value: pointer to value
 * Return: a hash node
*/
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = NULL;

	if (!key || strlen(key) == 0 || !value)
		return (NULL);

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);

	node->key = malloc(sizeof(char) * (strlen(key) + 1));
	if (!node->key)
	{
		if (node->value)
			free(node->value);
		free(node);
		return (NULL);
	}

	node->value = malloc(sizeof(char) * (strlen(value) + 1));
	if (!node->value)
	{
		if (node->key)
			free(node->key);
		free(node);
		return (NULL);
	}

	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;

	return (node);
}

/**
 * free_node - deallocates memory
 * @node: pointer to node to free
*/
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
