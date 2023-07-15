#include <stdio.h>
/**
 * main - this is a progrram that write alphabe in lowecase and uppercase
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	char U;

	c = 'a';
	U = 'A';
	while
		(c <= 'z')
		{
			putchar(c);
			c++;
		}
	while
		(U <= 'Z')
		{
			putchar(U);
			U++;
		}
	putchar('\n');
	return (0);
}
