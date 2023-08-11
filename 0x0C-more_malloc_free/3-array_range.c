#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimium value
 * @max: maximium value
 * Return: an array
 */
int *array_range(int min, int max)
{
	int size, *array, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (!array)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min + i;

	return (array);
}
