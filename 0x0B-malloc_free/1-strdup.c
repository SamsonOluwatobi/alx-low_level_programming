#include "main.h"
/**
 * _strdup - du[licate a string
 * @str: string to be duplicated
 * Return: pointer to new memory
 */
char *_strdup(char *str)
{
	char *dup;
	int i, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		j++;
	}
	dup = malloc(sizeof(char) * j + 1);
	if (dup == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			dup[i] = str[i];
		}
	}
	return (dup);
}
