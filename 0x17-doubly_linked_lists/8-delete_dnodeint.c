#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list.
 * @head: pointer to head pointer to the list
 * @index: index of node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head;
	dlistint_t *previous_node = NULL;
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
	if (!previous_node && !current_node->next)
		*head = current_node->next;
	else if (!previous_node && current_node->next)
	{
		*head = current_node->next;
		current_node->next->prev = NULL;
		current_node->next = NULL;
	}
	else if (current_node->next)
	{
		previous_node->next = current_node->next;
		current_node->next->prev = previous_node;
		current_node->next = NULL;
		current_node->prev = NULL;
	}
	else
	{
		previous_node->next = current_node->next;
		current_node->prev = NULL;
	}
	free(current_node);
	return (1);
}
