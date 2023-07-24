#include "main.h"
/**
 * print_rev - print reverse of a string
 * @s: string to be printed
 * Return:void
 */
void print_rev(char *s)
{
	int i;
	int a = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		a++;
	}
	for (i = a - 1; s[i] >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
