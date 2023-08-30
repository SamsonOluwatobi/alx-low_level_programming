#include "lists.h"
/**
 * free_listint - Frees all nodes of a listint_t linked list.
 * @head: Pointer to the head of the list.
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *tmp = head;

		head = head->next;
		free(tmp);
	}
}
