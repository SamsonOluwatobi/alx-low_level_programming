#include "main.h"
/**
 * swap_int - swap rhe value of two integers
 * @a: the first integer
 * @b: the second integer
 * Retuen:void
 */
void swap_int(int *a, int *b)
{
	int A;

	A = *a;
	*a = *b;
	*b = A;
}
