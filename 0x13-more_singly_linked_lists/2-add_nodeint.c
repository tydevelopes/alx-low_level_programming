#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to head pointer to the list
 * @n: number to add
 * Return: pointer to the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current_node = NULL;

	current_node = malloc(sizeof(listint_t));

	if (!current_node)
		return (NULL);

	current_node->n = (int) n;
	current_node->next = NULL;

	if (!head)
	{
		*head = current_node;
		return (current_node);
	}
	current_node->next = *head;
	*head = current_node;

	return (current_node);
}
