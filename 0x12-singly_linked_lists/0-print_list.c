#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: pointer to a list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t length = 0;
	const list_t *temp = NULL;

	if (!h)
		return (length);
	temp = h;
	while (temp)
	{
		length++;
		if (temp->str)
			printf("[%u] %s\n", temp->len, temp->str);
		else
			printf("[0] (nil)\n");
		temp = temp->next;
	}
	return (length);
}
