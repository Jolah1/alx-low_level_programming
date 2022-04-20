#include "main.h"

/**
 * swap_int - entry point
 * @a: First variable
 * @b: Second variable
 * Return: always return 0
 */

void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;

	*a = y;
	*b = x;
}
