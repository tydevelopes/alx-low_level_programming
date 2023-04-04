#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list.
 * @head: pointer to head pointer to the list
 * @index: index of node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = *head;
	listint_t *previous_node = NULL;
	unsigned int current_index = 0;

	if (!head || !current_node)
		return (-1);

	while (current_index != index && current_node)
	{
		previous_node = current_node;
		current_node = current_node->next;
		current_index++;
	}
	if (!current_node)
		return (-1);
	if (!previous_node)
		*head = current_node->next;
	else
		previous_node->next = current_node->next;

	free(current_node);
	return (1);
}
