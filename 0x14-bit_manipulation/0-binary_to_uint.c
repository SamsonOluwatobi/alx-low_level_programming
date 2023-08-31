#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 characters.
 * Return: The converted number, or 0 if there's an invalid character.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int base = 1;
	int length = 0;

	if (b == NULL)
		return (0);

	while (b[length] != '\0')
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
		length++;
	}

	while (length > 0)
	{
		result += (b[length - 1] - '0') * base;
		base *= 2;
		length--;
	}

	return (result);
}
