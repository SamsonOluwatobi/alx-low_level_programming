#include "main.h"
/**
 * _realloc - reallocates a memory block
 * @ptr: A pointer to the memory previously allocated
 * @old_size: is the size in byte of the allocated space
 * @new_size: is the new size, in bytes of the new memory block
 * Return: A memeory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	newptr = malloc(new_size);

	if (newptr == NULL)
	{
		return (NULL);
	}

	if (new_size > old_size)
	{
		old_size = old_size;
	}
	else
	{
		old_size = new_size;
	}

	memcpy(newptr, ptr, old_size);
	free(ptr);
	return (newptr);
}
