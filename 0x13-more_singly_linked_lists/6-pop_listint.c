#include "lists.h"
/**
 * pop_listint - Removes and returns the first element of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * Return: Value stored in the removed node.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	tmp = *head;
	*head = (*head)->next;

	free(tmp);

	return (data);
}
