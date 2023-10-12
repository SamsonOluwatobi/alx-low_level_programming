#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list.
 *
 * @h: A pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the doubly linked list.
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t cont = 0;

	while (node)
	{
		cont++;
		node = node->next;
	}

	return (cont);
}
