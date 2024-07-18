#include "search_algos.h"

/**
* print_array - prints an array.
* @array: The array to be printed.
* @left: The left index of the subarray to print.
* @right: The right index of the subarray to print.
*/
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i > left)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
* binary_search_recursive - recursively searches for a value in a sorted array.
* @array: pointer to the first element of the array to search in.
* @left: left index of the subarray to search.
* @right: right index of the subarray to search.
* @value: value to search for.
* Return: first index where value is located, or -1 if value is not present.
*/
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (left <= right)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;

		if (array[mid] == value)
		{
			if (mid == left || array[mid - 1] != value)
				return (mid);
			return (binary_search_recursive(array, left, mid, value));
		}
		if (array[mid] < value)
			return (binary_search_recursive(array, mid + 1, right, value));
		return (binary_search_recursive(array, left, mid - 1, value));
	}

	return (-1);
}

/**
* advanced_binary - searches for a value in a sorted array of integers,
* using the Binary search algorithm.
* @array: pointer to the first element of the array to search in.
* @size: number of elements in array.
* @value: value to search for.
* Return: first index where value is located, or -1 if value is not present.
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}

