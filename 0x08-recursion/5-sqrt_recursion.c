#include "main.h"
int real_sqrt(int n, int j);
/**
 * _sqrt_recursion - calculate the square root
 * @n: an integer to gets its square root
 * Return: value of n
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	else
	{
		n = real_sqrt(n, 0);
	}
	return (n);
}
/**
 * real_sqrt - get the square root
 * @n: integer to get the square root of
 * @j: suggested square root
 * Return: value of real sqrt
 */
int real_sqrt(int n, int j)
{
	if (j * j > n)
	{
		return (-1);
	}
	else if (j * j == n)
	{
		return (j);
	}
	return (real_sqrt(n, j + 1));
}
