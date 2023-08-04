#include "main.h"
/**
 * _islower - check if character is lower
 * @c: character to be checked
 * Return: 1 if character is lower or 0 if anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
