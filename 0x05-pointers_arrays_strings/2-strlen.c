#include "main.h"
/**
 * _strlen - calculte the lenght of a string
 * @s: the string
 * Return: the lenght value
 */
int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
