#include "search_algos.h"

/**
* print_array - prints the current part of the array being searched
* @array: pointer to the first element of the array to print
* @left: starting index of the subarray
* @right: ending index of the subarray
*/
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}

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

		/*printing*/
		print_array(array, left, right);
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

