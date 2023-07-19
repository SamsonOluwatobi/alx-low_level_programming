#include <stdio.h>
/**
 * main - print the first 98 fibonacci numbers
 * Return: 0 (success)
 */
int main(void)
{
	int count;
	unsigned long a = 0, b = 1, add;
	unsigned long a_1, a_2, b_1, b_2;
	unsigned long _1, _2;

	for (count = 0; count < 92; count++)
	{
		add = a + b;
		printf("%lu, ", add);
		a = b;
		b = add;
	}
	a_1 = a / 10000000000;
	b_1 = b / 10000000000;
	a_2 = a % 10000000000;
	b_2 = b % 10000000000;
	for (count = 93; count < 99; count++)
	{
		_1 = a_1 + b_1;
		_2 = a_2 + b_2;
		if (a_2 + b_2 > 9999999999)
		{
			_1 += 1;
			_2 %= 10000000000;
		}
		printf("%lu%lu", _1, _2);
		if (count != 98)
		{
			printf(", ");
			a_1 = b_1;
			a_2 = b_2;
			b_1 = _1;
			b_2 = _2;
		}
	}
	printf("\n");
	return (0);
}
