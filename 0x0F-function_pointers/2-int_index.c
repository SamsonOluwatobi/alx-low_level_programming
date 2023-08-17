#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array and returns its index
 * @array: pointer to the array
 * @size: number of elements in the array
 * @cmp: pointer to a function that compares integers
 * Return: index of the first element for which the comparison function returns true, or -1 if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
