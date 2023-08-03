#include "main.h"
int real_prime(int n, int j);
/**
 * is_prime_number - checking prime number
 * @n: an integer to check the prime number of
 * Return: 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (real_prime(n, n - 1));
}
/**
 * real_prime - check the real prime number
 * @n: an integer to check of
 * @j: number to iterate
 * Return: 1 or 0;
 */
int real_prime(int n, int j)
{
	if (j == 1)
	{
		return (1);
	}
	if (n % j == 0 && j > 0)
	{
		return (0);
	}
	return (real_prime(n, j - 1));
}
