#include "main.h"
/**
 * print_most_numbers - remove 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57;)
	{
		if (a == 50 || a == 52)
		{
			a++;
		}
		else
		{
			_putchar(a);
			a++;
		}
	}
	_putchar('\n');
}
