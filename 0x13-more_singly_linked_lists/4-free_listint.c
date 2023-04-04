#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to begining of list
 */
void free_listint(listint_t *head)
{
	listint_t *curr_node = NULL;

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
