#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to head pointer to the list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node = NULL;
	listint_t *current_node = *head;

	if (!head || !*head)
		return (NULL);

	while (current_node->next)
	{
		current_node = current_node->next;
		(*head)->next = previous_node;
		previous_node = *head;
		*head = current_node;
	}
	(*head)->next = previous_node;

	return (*head);
}
