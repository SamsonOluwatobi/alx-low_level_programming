#include <stdio.h>
/**
 * main - write the sum of even fibonacci less than 4000000 numbers
 * Return: 0 (success)
 */
int main(void)
{
	int i = 0;
	long a = 1, b = 2, add = b;

	while (b + a < 4000000)
	{
		b += a;
		if (b % 2 == 0)
		{
			add += b;
			a = b - a;
		}
		++i;
	}
	printf("%ld\n", add);
	return (0);
}
