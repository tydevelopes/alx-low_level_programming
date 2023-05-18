#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list_t list
 * @head: pointer to head pointer to the list
 * @n: number to add
 * Return: pointer to the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL;
	dlistint_t *curr_node = NULL;

	temp = malloc(sizeof(dlistint_t));

	if (!temp)
		return (NULL);

	temp->n = (int)n;
	temp->next = NULL;
	temp->prev = NULL;

	if (!*head)
	{
		*head = temp;
		return (temp);
	}
	curr_node = *head;

	while (curr_node->next)
		curr_node = curr_node->next;
	curr_node->next = temp;
	temp->prev = curr_node;

	return (temp);
}
