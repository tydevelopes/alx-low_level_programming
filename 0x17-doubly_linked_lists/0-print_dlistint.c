#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;
	const dlistint_t *current_node = NULL;

	if (!h)
		return (length);

	current_node = h;

	while (current_node)
	{
		length++;
		printf("%d\n", current_node->n);
		current_node = current_node->next;
	}
	return (length);
}
