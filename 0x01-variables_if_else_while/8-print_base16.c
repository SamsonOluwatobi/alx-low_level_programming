#include <stdio.h>
/**
 * main  - print all the numbe in base 16
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	int h;

	c = 'a';
	h = 0;
	while
		(h < 10)
		{
			putchar(h + '0');
			h++;
		}
	while
		(c <= 'f')
		{
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
