#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to head pointer to the list
 * @n: number to add
 * Return: pointer to the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current_node = NULL;

	current_node = malloc(sizeof(dlistint_t));

	if (!current_node)
		return (NULL);

	current_node->n = (int)n;
	current_node->next = NULL;
	current_node->prev = NULL;

	if (!*head)
	{
		*head = current_node;
		return (current_node);
	}
	current_node->next = *head;
	(*head)->prev = current_node;
	*head = current_node;

	return (current_node);
}
