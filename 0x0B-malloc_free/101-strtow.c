#include "main.h"
/**
 * count_word - Count the number of words in a string.
 * @str: The input string.
 * Return: The number of words.
 */
int count_word(char *str)
{
	int count = 0, i, j = 0;

	for (j = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			count = 0;
		else if (count == 0)
		{
			count = 1;
			j++;
		}
	}

	return (j);
}
/**
 * **strtow - splits a string into words.
 * @str: The input string.
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **word_array, *tmp;
	int i, k = 0, len = 0, words, j = 0, n, m;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	word_array = (char **) malloc(sizeof(char *) * (words + 1));
	if (word_array == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (j)
			{
				m = i;
				tmp = (char *) malloc(sizeof(char) * (j + 1));
				if (tmp == NULL)
					return (NULL);

				while (n < m)
				*tmp++ = str[n++];
				*tmp = '\0';
				word_array[k] = tmp - j;
				k++;
				j = 0;
			}
		}
		else if (j++ == 0)
			n = i;
	}

	word_array[k] = NULL;
	return (word_array);
}

