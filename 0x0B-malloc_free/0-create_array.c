#include "main.h"
/**
 * create_array - create an array
 * @size: size of an array
 * @c: character present in the array
 * Return: pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(char) * size);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < 0; i++)
	{
		a[i] = c;
	}
	return (a);

}
