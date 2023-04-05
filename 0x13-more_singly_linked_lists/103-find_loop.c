#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the list
 * Return: address of the node where the loop starts, or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	const listint_t *node_ptr_A = head;
	const listint_t *node_ptr_B = head;

	if (!head)
		return (NULL);

	while (node_ptr_B && node_ptr_B->next)
	{
		node_ptr_A = node_ptr_A->next;
		node_ptr_B = node_ptr_B->next->next;

		if (node_ptr_A == node_ptr_B)
			break;
	}

	if (!node_ptr_B || !node_ptr_B->next)
		return (NULL);

	node_ptr_A = head;

	while (node_ptr_A != node_ptr_B)
	{
		node_ptr_A = node_ptr_A->next;
		node_ptr_B = node_ptr_B->next;
	}

	return ((listint_t *)node_ptr_A);
}
