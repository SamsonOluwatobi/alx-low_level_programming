#include "search_algos.h"

/**
 * advanced_binary - searches for a value in a sorted array of integers,
 * using the Binary search algorithm.
 *
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * Return: first index where value is located,
 * or -1 if value is not present or array is NULL.
 *
 * Description: This function performs a binary search on a sorted array.
 * It initializes two pointers, left and right, to the beginning and
 * end of the array, respectively. It then repeatedly divides the
 * search space in half and compares the middle element with the
 * target value. If the middle element is less than the target value,
 * the left pointer is moved to the middle element. If the middle
 * element is greater than the target value, the right pointer is
 * moved to the middle element minus one. This process continues until
 * the target value is found or the left pointer is greater than the
 * right pointer. If the target value is found, its index is returned.
 * If the target value is not found, -1 is returned.
 **/
int advanced_binary(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;

	if (!array)
		return (-1);

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}

	return (-1);
}

