#include "main.h"
/**
 * _pow_recursion - print x raised to power y
 * @x: an integer
 * @y: another integer
 * Return: the value of x raised to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		x = x * _pow_recursion(x, y - 1);
	}
	return (x);
}
