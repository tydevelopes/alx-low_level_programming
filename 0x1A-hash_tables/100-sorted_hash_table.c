#include "hash_tables.h"
#include "sorted_hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of hash table
 * Return: pointer to the hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = NULL;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	/* Allocate memory for hash node items */
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (table->array == NULL)
		return (NULL);

	/* Initialise hash node items to NULL */
	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	table->shead = NULL;
	table->stail = NULL;
	table->size = size;

	return (table);
}

/**
 * shash_table_set - adds element to the hash table
 * @ht: pinter to the hash table
 * @key: pointer to key
 * @value: pointer to value
 * Return: 1 if success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	shash_node_t *node = NULL, *head = NULL, *current_node = NULL;

	if (!ht)
		return (0);

	node = create_snode(key, value);
	if (!node)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	/* Add node if node at index is NULL */
	if (!ht->array[index])
	{
		ht->array[index] = node;
		ht->shead = node;
		ht->stail = node;
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
shash_node_t *create_snode(const char *key, const char *value)
{
	shash_node_t *node = NULL;

	if (!key || strlen(key) == 0 || !value)
		return (NULL);

	node = malloc(sizeof(shash_node_t));
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
	node->sprev = NULL;
	node->snext = NULL;

	return (node);
}

/**
 * free_node - deallocates memory
 * @node: pointer to node to free
 */
void free_node(shash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
