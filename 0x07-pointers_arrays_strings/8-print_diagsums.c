#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of diagonals
 * @a: string
 * @size: size of square
 * Return: always return 0
 */

void print_diagsums(int *a, int size)
{
	int x, y, sum1 = 0, sum2 = 0;

	for (x = 0; x < size; x++)

		sum1 += a[(size + 1) * x];

	for (y = 0; y < size; y++)

		sum2 += a[(size - 1) * (y + 1)];

	printf("%d, %d\n", sum1, sum2);
}
