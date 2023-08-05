#include "main.h"
/**
 * _coins - cheack the minimium number of coins
 * @amount: cent
 * Return: value for numcoins
 */
int _coins(int amount)
{
	int coins[] = {25, 10, 5, 2, 1};
	int numCoins = 0;
	int i = 0;

	while (amount > 0)
	{
		numCoins += amount / coins[i];
		amount %= coins[i];
		i++;
	}
	return (numCoins);
}
/**
 * main - Program that prints the minimum number of coins for change
 * @argc: there
 * @argv: argument vector
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int cents = atoi(argv[1]);

		if (cents < 0)
		{
			printf("0\n");
		}
		else
		{
			int numcoins = _coins(cents);

			printf("%d\n", numcoins);
		}
	}
	return (0);
}
