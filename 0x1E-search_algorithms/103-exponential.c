#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of integers,
 * using the Exponential search algorithm.
 *
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 * Return: first index where value is located,
 * or -1 if value is not present or array is NULL.
 *
 * Description: The Exponential search algorithm works by first finding an
 * appropriate starting point based on the value being searched for, then
 * performing a linear search from that point. The starting point is calculated
 * using the formula: start = lo + (hi - lo) * log2(value / array[lo]), where
 * lo and hi are the lower and upper bounds of the search space, respectively.
 *
 * The function loops through the array, checking each element
 * until it finds the
 * desired value. It adjusts the search space based on the comparison between
 * the value and the element at the current index. If the value is found, its
 * index is returned. If the value is not found, the function returns -1.
 **/
int exponential_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	size_t lo = 0, hi = size - 1;

	while (lo <= hi && array[hi] < value)
		hi *= 2;

	while (lo <= hi)
	{
		size_t mid = lo + (hi - lo) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			lo = mid + 1;
		else
			hi = mid - 1;
	}

	return (-1);
}

