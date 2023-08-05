#include "main.h"
/**
 * main - Program that multiplies two numbers
 * @argc: there
 * @argv: argument vector
 * Return: 0 (success) 1 (Failed)
 */
int main(int argc, char *argv[])
{
	if (argc > 2)
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
