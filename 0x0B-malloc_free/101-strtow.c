#include "main.h"
/**
 * count_words - Count the number of words in a string.
 * @str: The input string.
 * Return: The number of words.
 */
int count_words(char *str)
{
        int count = 0, i;
        bool in_word = false;

        for (i = 0; str[i] != '\0'; i++)
        {
                if (str[i] != ' ')
                {
                        if (!in_word)
                        {
                                count++;
                                in_word = true;
                        }
                }
                else
                {
                        in_word = false;
        }
        return (count);
}
/**
 * strtow - Splits a string into words.
 * @str: The input string.
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	int words, n, m, i = 0, j = 0, k = 0;
	bool in_word = false;
	char **word_array;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);
	word_array = malloc((words + 1) * sizeof(char *));
	if (word_array == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			if (!in_word)
			{
				in_word = true;
			       	j = i;
			}
		}
		else
		{
			if (in_word)
			{
				word_array[k] = malloc((i - j + 1) * sizeof(char));
				if (word_array[k] == NULL)
				{
					for (m = 0; m < k; m++)
						free(word_array[m]);
					free(word_array);
					return (NULL);
				}
				for (n = 0; j < i; j++, n++)
					word_array[k][n] = str[j];
				word_array[k][n] = '\0';
				k++;
				in_word = false;
			}
		}
		i++;
	}
	if (in_word)
	{
		word_array[k] = malloc((i - j + 1) * sizeof(char));
		if (word_array[k] == NULL)
		{
			for (m = 0; m < k; m++)
				free(word_array[m]);
			free(word_array);
			return (NULL);
		}
		for (n = 0; j < i; j++, n++)
			word_array[k][n] = str[j];
		word_array[k][n] = '\0';
		k++;
	}
	word_array[k] = NULL;
	return (word_array);
}
