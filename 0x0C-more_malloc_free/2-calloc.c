#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i;
	
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
		else
		{
			i = 0;
			while (i < nmemb * size)
			{
				((char *)arr[i] = 0;
				i++;
			}
		}
	}
	return (arr);
}
