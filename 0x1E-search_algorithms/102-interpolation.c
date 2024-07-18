#include "search_algos.h"
/**
* interpolation_search - searches for a value in a sorted array of integers,
* using the Interpolation search algorithm.
* @array: pointer to the first element of the array to search in.
* @size: number of elements in array.
* @value: value to search for.
*
* Description: The Interpolation search algorithm works by first finding an
* appropriate starting point based on the value being searched for, then
* performing a linear search from that point. The starting point is calculated
* using the formula: start = lo + ((hi - lo) / (array[hi] - array[lo])) *
* (value - array[lo]), where lo and hi are the lower and upper bounds of the
* search space, respectively.
*
* Return: first index where value is located,
* or -1 if value is not present or array is NULL.
**/
int interpolation_search(int *array, size_t size, int value)
{
	size_t lo = 0;
	size_t hi = size - 1;

	if (!array || size == 0)
		return (-1);

	/* search for the value in the array */
	while (lo <= hi && value >= array[lo] && value <= array[hi])
	{
		size_t start;


		start = lo + (((double)(hi - lo) / (array[hi] - array[lo]))
		* (value - array[lo]));

		if (start >= size)
		{
			printf("Value checked array[%lu] is out of range\n", start);
			return (-1);
		}

		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		/* if value is found, return the index */
		if (array[start] == value)
			return (start);

		/* adjust the search space based on the comparison */
		if (array[start] < value)
			lo = start + 1;
		else
			hi = start - 1;
	}

	/* if value is not found, return -1 */
	return (-1);
}

