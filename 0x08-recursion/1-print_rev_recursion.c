#include "main.h"
/**
 * _print_rev_recursion - print a string recursively
 * @s: string to be printed
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	char c;

	if (*s != '\0')
	{
		c = *s;
		_print_rev_recursion(s + 1);
		_putchar(c);
	}
}
