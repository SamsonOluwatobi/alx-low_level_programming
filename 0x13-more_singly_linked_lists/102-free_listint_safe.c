#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Pointer to a pointer to the head of the list.
 * Return: Size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *curr;

	if (h == NULL || *h == NULL)
		return (0);

	curr = *h;

	while (curr != NULL)
	{
		count++;
		if (curr < curr->next)
		{
			*h = NULL;
			return (count);
		}
		curr = curr->next;
	}
	free(curr);
	*h = NULL;
	return (count);
}
