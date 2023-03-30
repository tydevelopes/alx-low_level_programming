#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to head pointer to the list
 * @str: pointer to the string to add
 * Return: pointer to the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = NULL;
	list_t *curr_node = NULL;

	if (!str)
		return (NULL);

	temp = malloc(sizeof(list_t));

	if (!temp)
		return (NULL);

	temp->str = strdup(str);

	if (!temp->str)
	{
		free(temp);
		return (NULL);
	}

	temp->len = (unsigned int)strlen(str);
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
