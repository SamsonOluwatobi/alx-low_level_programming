#include "search_algos.h"

/**
* binary_search_ex - performs binary search within specified range.
* @array: pointer to the first element of the array to search in.
* @left: left boundary of the search range.
* @right: right boundary of the search range.
* @value: value to search for.
* Return: index where value is located, or -1 if value is not present.
*/
int binary_search_ex(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i > left)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");

		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return ((int)mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

/**
* exponential_search - searches for a value in a sorted array of integers,
* using the Exponential search algorithm.
* @array: pointer to the first element of the array to search in.
* @size: number of elements in array.
* @value: value to search for.
* Return: first index where value is located,
* or -1 if value is not present or array is NULL.
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t left, right;

	if (!array || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	left = bound / 2;
	right = (bound < size) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	return (binary_search_ex(array, left, right, value));
}

