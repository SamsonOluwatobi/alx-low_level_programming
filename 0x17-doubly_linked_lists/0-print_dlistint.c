#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly linked list.
 *
 * @h: A pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the doubly linked list.
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t cont = 0;

	while (node)
	{
		printf("%i\n", node->n);
		cont++;
		node = node->next;
	}

	return (cont);
}
