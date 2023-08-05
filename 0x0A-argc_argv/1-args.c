#include "main.h"
/**
 * main - Program that prints the number of argument passed into it
 * @argc: there
 * @argv: argument vector
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) *argv;

	printf("%d\n", (argc - 1));
	return (0);
}
