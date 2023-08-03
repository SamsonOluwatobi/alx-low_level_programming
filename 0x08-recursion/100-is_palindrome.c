#include "main.h"
int pal(char *s, int j, int l);
int str_len(char *s);
/**
 * is_palindrome - check if a string is a palindrome
 * @s: the string to be checked
 * Return: 1 if is palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (pal(s, 0, str_len(s)));
}
/**
 * str_len - get the length of a string recursively
 * @s: string
 * Return: the length value of s
 */
int str_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_len(s + 1));
}
/**
 * pal - check if a string is actually a palindrome
 * @s: string to be checked
 * @j: iterator
 * @l: the length of s
 * Return: 1 or 0
 */
int pal(char *s, int j, int l)
{
	if (*(s + j) != *(s + l - 1))
	{
		return (0);
	}
	if (j >= l)
	{
		return (1);
	}
	return (pal(s, j + 1, l - 1));
}
