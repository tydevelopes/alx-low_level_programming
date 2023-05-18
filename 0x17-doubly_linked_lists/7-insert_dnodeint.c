#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @head: pointer to head pointer to the list
 * @idx: index of the list where the new node should be added
 * @n: number to insert
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
				     unsigned int idx, int n)
{
	dlistint_t *current_node = *head, *previous_node = NULL, *temp = NULL;
	unsigned int current_index = 0;

	if (!head || (!current_node && idx != 0))
		return (NULL);
	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;
	while (current_index != idx && current_node)
	{
		previous_node = current_node;
		current_node = current_node->next;
		current_index++;
	}
	if (!current_node && idx == 0)
		*head = temp;
	else if (!previous_node)
	{
		temp->next = current_node;
		(*head)->prev = temp;
		*head = temp;
	}
	else if (current_index == idx)
	{
		previous_node->next = temp;
		temp->prev = previous_node;
		temp->next = current_node;
		if (current_node)
			current_node->prev = temp;
	}
	else
	{
		free(temp);
		temp = NULL;
	}
	return (temp);
}
