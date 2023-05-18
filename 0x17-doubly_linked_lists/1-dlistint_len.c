#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the list
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;
	const dlistint_t *current_node = NULL;

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
