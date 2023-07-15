#include <stdio.h>
/**
 * main - print the alphabe without q and e
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z')
		{
			if (c != 'e' && c != 'q')
				putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
