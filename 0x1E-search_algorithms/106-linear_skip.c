#include "search_algos.h"
/**
* linear_skip - searches for a value in a sorted skip list of integers.
* @list: pointer to the head of the skip list to search in.
* @value: value to search for.
* Return: pointer to the first node where value is located,
* NULL if value is not present in the list or if head is NULL.
*
* Description: This function searches for a value in a sorted skip list of
* integers. It takes a pointer to the head of the skip list and the value to
* search for as parameters. It returns a pointer to the first node where the
* value is located, or NULL if the value is not present in the list or if the
* head is NULL.
*
* The function first checks if the head of the skip list is NULL. If it is,
* it returns NULL. Otherwise, it initializes a temporary pointer to the head
* of the skip list and enters a loop to search for the value. The loop
* continues until the temporary pointer is NULL or the value is found.
*
* Inside the loop, the function compares the value of the current node with
* the value being searched for. If they are equal, it returns a pointer to the
* current node. If they are not equal, the function updates the temporary
* pointer to the next node in the skip list.
*
* If the value is not found in the skip list, the function returns NULL.
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp = list;
	skiplist_t *express = NULL;

	if (!list)
		return (NULL);

	while (temp->express && temp->express->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
			temp->express->index, temp->express->n);
		temp = temp->express;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
		temp->index, temp->express ? temp->express->index : temp->index);

	express = temp->express ? temp->express : temp;

	while (temp && temp->index <= express->index)
	{
		printf("Value checked at index [%lu] = [%d]\n",
			temp->index, temp->n);
		if (temp->n == value)
			return (temp);
		temp = temp->next;
	}

	return (NULL);
}

