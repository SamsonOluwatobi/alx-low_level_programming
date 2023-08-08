#include "main.h"
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: arguments vector
 * Return: a pointer to a new string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0, i, j, k;
	char *s;

	if (ac <= 0 || av == NULL)
		return (NULL);
	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		if (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				total_length++;
				j++;
			}
			total_length++;
		}
	}
	s = malloc(total_length + 1);
	if (s == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		if (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				s[k] = av[i][j];
				k++;
				j++;
			}
			s[k] = '\n';
			k++;
		}
	}
	s[k] = '\0';
	return (s);
}
