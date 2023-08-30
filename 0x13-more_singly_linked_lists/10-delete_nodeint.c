#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node
 * at a given index in a linked list.
 * @head: Pointer to the head pointer of the linked list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *pre;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		listint_t *tmp = *head;

		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	curr = *head;
	pre = NULL;
	for (i = 0; curr != NULL && i < index; i++)
	{
		pre = curr;
		curr = curr->next;
	}

	if (curr == NULL)
		return (-1);

	pre->next = curr->next;
	free(curr);
	return (1);
}
