#include "lists.h"

/**
 * sum_dlistint - returns the sum of data of a listint_t linked list
 * @head: pointer to head of the list
 * Return: sum of data in list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current_node = head;

	if (!current_node)
		return (0);

	while (current_node)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
