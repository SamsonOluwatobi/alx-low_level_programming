#include "search_algos.h"

/**
* jump_list - searches for a value in a sorted list of integers
* using the Jump search algorithm.
* @list: pointer to the head of the list to search in.
* @size: number of nodes in the list.
* @value: value to search for.
* Return: pointer to the first node where value is located.
* resturns NULL if value is not present in the list or if head is NULL.
*
* Description: The Jump search algorithm works by first finding an
* appropriate jump size, then jumping to that position in the list.
* It then compares the value in the jumped position with the value
* being searched for, and if it is greater, it jumps to the position
* size / 2 positions forward. If the value is still greater, it jumps
* to the position size / 4 positions forward, and so on. If the value
* is less than the value being searched for, it jumps back to the
* previous position and continues in the same manner. This process
* continues until the value is found or the end of the list is
* reached.
*
* The algorithm has a time complexity of O(sqrt(n)), where n is the
* number of elements in the list.
**/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump_size = sqrt(size);
	listint_t *prev = list;
	listint_t *current = list;
	size_t index = 0, i;

	if (!list)
		return (NULL);

	while (current->next && current->n < value)
	{
		prev = current;
		index += jump_size;

		for (i = 0; current->next && i < jump_size; i++)
			current = current->next;

		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

		if (current->n >= value)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	prev->index, current->index);

	while (prev && prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);

		if (prev->n == value)
			return (prev);

		prev = prev->next;
	}

	return (NULL);
}

