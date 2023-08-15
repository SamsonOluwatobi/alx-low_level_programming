#include "main.h"

long int is_digit(char *s);
long int mul(long int num1, long int num2);
/**
 * main - programs that multiplies two positive numbers
 * @argc: number of argument
 * @argv: the arument
 * Return: success (0)
 */
int main(int argc, char *argv[])
{
	long int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = mul(num1, num2);

	printf("%ld\n", result);
	return (0);
}
/**
 * is_digit - check if an argumenent is a digit
 * @s: A pointer char
 * Return: 0 if is not digit and 1 if is digit
 */
long int is_digit(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		return (0);
	}
	return (1);
}
/**
 * mul- multiplies the two argument
 * @num1: the first integer argument
 * @num2: the second integer argument
 * Return: th value of num1 * num2
 */
long int mul(long int num1, long int num2)
{
	return (num1 * num2);
}
