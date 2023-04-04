#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the list
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t length = 0;
	const listint_t *current_node = NULL;

	if (!h)
		return (length);
	current_node = h;
	while (current_node)
	{
		length++;
		current_node = current_node->next;
	}
	return (length);
}
