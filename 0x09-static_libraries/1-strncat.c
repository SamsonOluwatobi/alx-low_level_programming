#include "main.h"
/**
 * _strncat - join two strings with to the nth cahracter
 * @dest: destination string
 * @src: source string
 * @n: number of byte
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len_dest++;
	}
	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len_dest + i] = *src;
		src++;
	}
	dest[len_dest + i] = '\0';
	return (dest);
}
