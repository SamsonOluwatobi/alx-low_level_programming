#include "main.h"
/**
 * print_line - Print aa line
 * @n: the lenght of the line
 * Return: void
 */
void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
