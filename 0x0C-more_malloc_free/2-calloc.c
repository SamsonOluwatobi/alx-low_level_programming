#include "main.h"
/**
 * _calloc -function that allocates memory for an array, using malloc
 * @nmemb: elements of an array
 * @size: size of an array
 * Return: Array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(nmemb * size);
		if (arr == NULL)
		{
			return (NULL);
		}
	memset(arr, 0, nmemb * size);
	return (arr);
	}
}
