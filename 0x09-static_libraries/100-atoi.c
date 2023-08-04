#include "main.h"
/**
 * _atoi - convert string to integer
 * @s: strings to be coverted
 * Return: integer value
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int ui = 0;
	int low = 1;
	int j = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			low *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			j = 1;
			ui = (ui * 10) + (s[i] - '0');
			i++;
		}
		if (j == 1)
		{
			break;
		}
		i++;
	}
	ui *= low;
	return (ui);
}
