#include "main.h"
/**
 * _isupper - check if a character is upper
 * @c: character to be checked
 * Return: 1 if upper and 0 if lower
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
