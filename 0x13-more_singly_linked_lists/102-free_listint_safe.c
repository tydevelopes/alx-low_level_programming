#include "lists.h"

/**
 * free_listint_safe - prints all elements of a listint_t list
 * @h: pointer head point to the list
 * Return: size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	listint_t *current_node = NULL;
	const listint_t *array[1024] = {NULL};

	if (!h || !*h)
		return (0);

	current_node = *h;

	while ((*h)->next)
	{
		if (contains_address(array, *h))
			break;

		array[length] = *h;

		length++;
		*h = (*h)->next;
		free(current_node);
		current_node = *h;
	}
	free(current_node);
	*h = NULL;
	return (length);
}
