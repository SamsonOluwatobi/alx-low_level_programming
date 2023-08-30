#include "lists.h"
/**
 * listint_len - Counts the number of elements in a listint_t linked list.
 * @h: Pointer to the head of the list.
 * Return: Number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
