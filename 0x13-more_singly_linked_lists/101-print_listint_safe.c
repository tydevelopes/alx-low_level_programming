#include "lists.h"

/**
 * print_listint_safe - prints all elements of a listint_t list
 * @head: pointer to the list
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t length = 0;
	const listint_t *current_node = NULL;
	const listint_t *array[1024] = {NULL};

	if (!head)
		return (0);

	current_node = head;

	while (current_node)
	{
		if (contains_address(array, current_node))
		{
			printf("-> [%p] %d\n", (void *)current_node, current_node->n);
			break;
		}
		array[length] = current_node;

		length++;
		printf("[%p] %d\n", (void *)current_node, current_node->n);
		current_node = current_node->next;
	}
	return (length);
}

/**
 * contains_address - checks if array contains given node
 * @array: array of pointers to listint_t
 * @node: node to search
 * Return: 1 if found, 0 otherwise
 */
int contains_address(const listint_t *array[], const listint_t *node)
{
	int i = 0;

	while (array[i])
	{
		if (array[i] == node)
			return (1);
		i++;
	}
	return (0);
}
