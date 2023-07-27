#include "main.h"
/**
 * cap_string - check the code
 * @str: capitalize all word of a string
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] >= 97 && str[i] <= 122))
			i++;
		if ((str[i - 1] >= 32 && str[i - 1] <= 34) ||
				(str[i - 1] >= 28 && str[i - 1] <=  29)
				|| str[i - 1] == 123 || str[i - 1] == 125 ||
				str[i - 1] == 44 || str[i - 1] == 46 ||
				str[i - 1] == 59 || str[i - 1] == 63 ||
				str[i - 1] == '\t' || str[i - 1] == '\n' ||
				i == 0)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
