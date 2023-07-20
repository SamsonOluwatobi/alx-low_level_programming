#include "main.h"
/**
 * print_triangle - Print a triangle
 * @size: size of a triangle
 * Return: void
 */
void print_triangle(int size)
{
	int a, b;

	if (size == 0)
	{
		_putchar('\n');
	}
	for (a = 1; a <= size; a++)
	{
		for (b = 2; b <= size; b++)
		{
			if (b > a)
			{
				_putchar(' ');
			}
		}
		for (b = 0; b <= size; b++)
		{
			if (b < a)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
