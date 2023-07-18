#include "main.h"
/**
 * _isalpha - checks if character is an alphabet
 * @c: character to be checked
 * Return: 1 for alphabet or 0 if anything else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
