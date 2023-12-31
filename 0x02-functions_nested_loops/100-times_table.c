#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: The number to be computed.
 * Return: .....
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				_putchar(44);
				_putchar(32);
				c = a * b;
				if (c <= 99)
				{
					_putchar(32);
				}
				if (c <= 9)
				{
					_putchar(32);
				}
				if (c >= 100)
				{
					_putchar((c / 100) + '0');
					_putchar((c / 10)  % 10 + '0');
				}
				else if (c <= 99 && c >= 10)
				{
					_putchar((c / 10) + '0');
				}
				_putchar((c % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
