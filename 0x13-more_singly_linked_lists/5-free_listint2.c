#include "lists.h"
/**
 * free_listint2 - Frees all nodes of a listint_t
 * linked list and sets head to NULL.
 * @head: Pointer to a pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *next_node;

	while (curr != NULL)
	{
		next_node = curr->next;
		free(curr);
		curr = next_node;
	}
	*head = NULL;
}
