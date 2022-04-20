#include "main.h"

/**
 * swap_int - swap variable values
 * @a: pointer 1
 * @b: pointer 2
 * Return: always return 0
 */

void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;

	*a = y;
	*b = x;
}
