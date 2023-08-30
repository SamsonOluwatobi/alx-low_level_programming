#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to retrieve.
 * Return: Pointer to the nth node, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr = head;
	unsigned int i;

	if (curr == NULL)
		return (NULL);

	for (i = 0; curr != NULL && i < index; i++)
	{
		curr = curr->next;
	}
	return (curr);
}
