#include "main.h"
/**
 * print_diagonal - print diagonally
 * @n: number of times
 * Return: void
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (a = 1; a  <= n; a++)
	{
		for (b = 1; b <= n; b++)
		{
			if (b == a)
			{
				_putchar('\\');
			}
			else if (b < a)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
