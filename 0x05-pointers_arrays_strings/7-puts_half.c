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
	for (i = (j / 2); str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
