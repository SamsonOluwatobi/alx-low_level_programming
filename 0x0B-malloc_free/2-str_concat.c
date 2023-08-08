#include "main.h"
/**
 * str_concrat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to an allocated space
 */
char *str_concat(char *s1, char *s2)
{
	int len_s1 = 0, len_s2 = 0, i;
	char *o;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		len_s1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		len_s2++;
	}
	o = malloc(sizeof(char) * (len_s1 + len_s2) + 1);
	if (o == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		o[i] = s1[i];
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		o[len_s1 + i] = s2[i];
	}
	return (o);
}
