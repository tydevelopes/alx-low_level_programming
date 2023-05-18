#include "lists.h"

/**
 * free_dlistint - frees a listint_t list
 * @head: pointer to begining of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr_node = NULL;

	if (!head)
		return;

	curr_node = head;

	while (head->next)
	{
		head = head->next;
		free(curr_node);
		curr_node = head;
	}
	free(head);
}
