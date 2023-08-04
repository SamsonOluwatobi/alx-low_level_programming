#include "main.h"
/**
*_strcat - add two strings
*@dest: destination string
*@src: sourcw string
*Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int len_dest = 0;
	int len_src = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len_dest++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		len_src++;
	}
	for (i = 0; i <= len_src; i++)
	{
		dest[len_dest + i] = src[i];
	}
	return (dest);
}
