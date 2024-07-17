#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers,
 * using the Linear search algorithm.
 *
 * Description: This function loops through the array, checking each
 * element until it finds the desired value. If the value is found, its
 * index is returned. If the value is not found, the function returns -1.
 *
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 * Return: first index where value is located,
 * or -1 if value is not present or array is NULL.
 **/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	/* loop through the array and check each element */
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	/* if the value is not found, return -1 */
	return (-1);
}

