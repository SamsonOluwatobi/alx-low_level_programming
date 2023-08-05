#include "main.h"
/**
 * main - Program that adds positive numbers
 * @argc: there
 * @argv: argument vector
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int j = 0;

			while (argv[i][j] != '\0')
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
