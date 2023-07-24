#include "main.h"
/**
 * rev_string - reeverse a string
 *@s: string to be reverse
 *Return:void
 */
void rev_string(char *s)
{
	int a;
	int i = 0;
	char b;

	for (a = 0; s[a] != '\0'; a++)
	{
		i++;
	}
	for (a = 0; a <= (i / 2); a++)
	{
		b = s[a];
		s[a] = s[i - 1 - a];
		s[i - 1 - a] = b;
	}
}
