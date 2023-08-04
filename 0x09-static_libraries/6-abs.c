#include "main.h"
/**
 * _abs - absolute value of an integer
 *  @n: number to be commputed
 *  Return: absolute value of number or zero
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
		return (abs_val);
	}
	return (n);
}
