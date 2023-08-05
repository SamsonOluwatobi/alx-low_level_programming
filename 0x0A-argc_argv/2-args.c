#include "main.h"
/**
 * main - Program that print one argument per line, ending with a new line
 * @argc: there
 * @argv: argument vector
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
