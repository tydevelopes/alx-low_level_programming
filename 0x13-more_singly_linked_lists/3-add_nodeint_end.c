#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list_t list
 * @head: pointer to head pointer to the list
 * @n: number to add
 * Return: pointer to the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = NULL;
	listint_t *curr_node = NULL;

	temp = malloc(sizeof(listint_t));

	if (!temp)
		return (NULL);

	temp->n = (int) n;
	temp->next = NULL;

	if (!*head)
	{
		*head = temp;
		return (temp);
	}
	curr_node = *head;

	while (curr_node->next)
		curr_node = curr_node->next;
	curr_node->next = temp;

	return (temp);
}
