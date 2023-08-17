#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - iterates through an array and performs an action on each element
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to a function that performs an action on an integer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
