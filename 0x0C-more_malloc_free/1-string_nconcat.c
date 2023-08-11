#include "main.h"
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: First string pointer
 * @s2: Second string pointer
 * @n:	an unsigned integer
 * Return: return a pointer to a string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int count, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (count = 0; s1[count] != '\0'; count++)

	ptr = malloc(sizeof(char) * (n + count + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < n + count; i++)
	{
		if (!(n >= count_s2))
		{
			ptr[count_1 + i] = s2[i];
		}
	}
	ptr[count_1 + i] = '\0';
	return (ptr);
}
