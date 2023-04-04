#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to begining of list
 * @index: index of the node
 * Return: node at index or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;
	unsigned int current_index = 0;

	if (!current_node)
		return (NULL);

	while (current_index != index)
	{
		if (!current_node->next)
			return (NULL);
		current_node = current_node->next;
		current_index++;
	}
	return (current_node);
}
