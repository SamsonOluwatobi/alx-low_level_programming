#include "main.h"
/**
 * factorial - calculate the factorial of n
 * @n: an integer
 * Return: the value of factorial n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		n = n * factorial(n - 1);
	}
	return (n);
}
