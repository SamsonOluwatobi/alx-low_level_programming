#include "search_algos.h"

/**
* binary_search - searches for a value in a sorted array of integers,
* using the Binary search algorithm.
* @array: pointer to the first element of the array to search in.
* @size: number of elements in array.
* @value: value to search for.
* Return: first index where value is located,
* or -1 if value is not present or array is NULL.
**/
int binary_search(int *array, size_t size, int value)
{
	/* initialize left and right pointers */
	size_t left = 0;
	size_t right = size - 1;

	if (array == NULL || size == 0)
		return (-1);
	/* while there is still a search space */
	while (right >= left)
	{
		/* calculate the middle index */
		size_t mid = left + (right - left) / 2;

		/* if value is found, return the index */
		if (array[mid] == value)
			return (mid);

		/* adjust the search space based on the comparison */
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	/* if value is not found, return -1 */
	return (-1);
}

