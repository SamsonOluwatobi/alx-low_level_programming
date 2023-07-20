#include "main.h"
/**
 * print_square - Print square
 * @size: the number of square
 * Return: void
 */
void print_square(int size)
{
	int a;
	int b;

	if (size == 0)
	{
		_putchar('\n');
	}
	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
