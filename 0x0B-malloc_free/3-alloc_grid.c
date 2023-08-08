#include "main.h"
/**
 * alloc_grid - create a pointer to a 2 dimensional array of integers.
 * @width: the width size
 * @height: the height size
 * Return: returns a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **o, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	o = malloc(sizeof(int *) * height);
	if (o == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		o[i] = malloc(sizeof(int) * width);
		if (o[i] == NULL)
		{
			free(o);
			for (j = 0; j <= height; j++)
			{
				free(o[j]);
			}
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			o[i][j] = 0;
		}
	}
	return (o);
}
