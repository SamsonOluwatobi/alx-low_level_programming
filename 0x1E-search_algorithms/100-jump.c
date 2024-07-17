#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers,
 * using the Jump search algorithm.
 *
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 * Return: first index where value is located,
 * or -1 if value is not present or array is NULL.
 *
 * Description: The Jump search algorithm works by first finding an
 * appropriate jump size, then jumping to that position in the array.
 * It then compares the value in the jumped position with the value
 * being searched for, and if it is greater, it jumps to the position
 * size / 2 positions forward. If the value is still greater, it jumps
 * to the position size / 4 positions forward, and so on. If the value
 * is less than the value being searched for, it jumps back to the
 * previous position and continues in the same manner. This process
 * continues until the value is found or the end of the array is
 * reached.
 *
 * The algorithm has a time complexity of O(sqrt(n)), where n is the
 * number of elements in the array.
 **/
int jump_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	size_t jump_size = sqrt(size);
	size_t prev = 0;
	size_t i = jump_size;

	while (i < size && array[i] < value)
	{
		prev = i;
		i += jump_size;
		jump_size /= 2;
	}

	while (i >= prev && array[i] >= value)
	{
		if (array[i] == value)
			return (i);
		i--;
	}

	return (-1);
}

