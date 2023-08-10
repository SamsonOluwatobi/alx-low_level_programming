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
	unsigned int count, count_1, count_2, count_s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (count_s2 = 0; s2[count_s2] != '\0'; count_s2++)
	for (count = 0; s1[count] != '\0'; count++)

	ptr = malloc(sizeof(char) * (n + count + 1));
	if (ptr == NULL)
		return (NULL);

	count_1 = 0;
	while (count_1 < count)
	{
		ptr[count_1] = s1[count_1];
		count_1++;
	}

	count_2 = 0;
	while (count_2 <= n && s2[count_2] != '\0')
	{
		ptr[count_1 + count_2] = s2[count_2];
		count_2++;
	}
	ptr[count_1 + count_2] = '\0';
	return (ptr);
}
