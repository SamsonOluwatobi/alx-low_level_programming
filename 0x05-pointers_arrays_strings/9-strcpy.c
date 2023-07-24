#include "main.h"
/**
 * *_strcpy - swap a string
 * @src: the source string
 * @dest: the destination string
 * Return: values of dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
