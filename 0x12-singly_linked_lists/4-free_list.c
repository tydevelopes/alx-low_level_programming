#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to begining of list
 */
void free_list(list_t *head)
{
	list_t *curr_node = NULL;

	if (!head)
		return;

	curr_node = head;

	while (head->next)
	{
		head = head->next;
		free(curr_node->str);
		free(curr_node);
		curr_node = head;
	}
	free(head->str);
	free(head);
}
