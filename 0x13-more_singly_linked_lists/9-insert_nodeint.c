#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to head pointer to the list
 * @idx: index of the list where the new node should be added
 * @n: number to insert
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current_node = *head;
	listint_t *previous_node = NULL;
	listint_t *temp = NULL;
	unsigned int current_index = 0;

	if (!head || (!current_node && idx != 0))
		return (NULL);

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

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
		*head = temp;
	}
	else if (current_index == idx)
	{
		previous_node->next = temp;
		temp->next = current_node;
	}
	else
	{
		free(temp);
		temp = NULL;
	}
	return (temp);
}
