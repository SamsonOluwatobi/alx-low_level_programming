#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * positive_or_negative - This program will determine
 * if number is negative or positive
 * @i: integer
 * Return: 0 (success)
 */
/* betty style doc for function main goes there */
void positive_or_negative(int i)
{
	/* your code goes there */
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
