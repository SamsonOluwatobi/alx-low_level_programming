#include <stdio.h>
/**
 * main - the sum of mutiples of 3 and 5
 * Return: 0 (success)
 */
int main(void)
{
	int m, n = 0;

	while (m < 1024)
	{
		if ((m % 3 == 0) || (m % 5 == 0))
		{
			n += m;
		}
		m++;
	}
	printf("%d\n", n);
	return (0);
}
