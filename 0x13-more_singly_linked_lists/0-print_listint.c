#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t length = 0;
	const listint_t *current_node = NULL;

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
