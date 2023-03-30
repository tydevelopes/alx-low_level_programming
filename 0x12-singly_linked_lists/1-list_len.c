#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the list
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;
	const list_t *temp = NULL;

	if (!h)
		return (length);
	temp = h;
	while (temp)
	{
		if (temp->str)
			length++;
		temp = temp->next;
	}
	return (length);
}
