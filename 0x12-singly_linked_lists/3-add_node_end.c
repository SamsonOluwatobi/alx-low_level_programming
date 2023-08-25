#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @str: The string to be added to the new node.
 * Return: Address of the new element, or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = new;
	return (new);
}
