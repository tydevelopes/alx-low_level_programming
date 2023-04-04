#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to head pointer to the list
 * Return: pointer to the ndeleted node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *removed_node = NULL;

	if (!head || !*head)
	{
		return (0);
	}
	removed_node = *head;
	*head = (*head)->next;

	n = removed_node->n;

	free(removed_node);

	return (n);
}
