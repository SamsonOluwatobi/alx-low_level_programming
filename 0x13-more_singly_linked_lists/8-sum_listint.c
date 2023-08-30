#include "lists.h"
/**
 * sum_listint - Computes the sum of all the data
 * (n) of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * Return: Sum of the data values.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *curr = head;

	if (curr == NULL)
		return (0);

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
