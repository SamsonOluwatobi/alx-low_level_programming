#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the head pointer of the linked list.
 * @idx: Index at which the new node should be inserted.
 * @n: Value to be assigned to the data (n) of the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *curr = *head;
	unsigned int i;

	if (curr == NULL)
		return (NULL);

	new = (listint_t *) malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; curr != NULL && i < idx - 1; i++)
	{
		curr = curr->next;
	}
	if (curr == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = curr->next;
	curr->next = new;
	return (new);
}
