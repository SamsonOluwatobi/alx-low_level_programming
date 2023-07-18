#include "main.h"
/**
 * print_last_digit - the last digit of number
 * @n: number to be treated
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int end;

	end = n % 10;
	if (end < 0)
	{
		end = end * -1;
	}
	_putchar(end + '0');
	return (end);
}
