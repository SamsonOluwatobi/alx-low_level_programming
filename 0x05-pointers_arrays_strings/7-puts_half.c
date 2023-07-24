#include "main.h"
/**
 * puts_half - print half of a string
 * @str: string to be printed
 * Return:void
 */
void puts_half(char *str)
{
	int i;
	int j = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		j++;
	}
	if (i % 2 == 0)
	{
		for (i = (j / 2); str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (i % 2 != 0)
	{
		for (i = (j / 2) + 1; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
