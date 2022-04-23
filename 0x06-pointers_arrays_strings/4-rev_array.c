#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * of integers
 * @a: array lists
 * @n: number of elements of the array
 * Return: return nothing
 */

void reverse_array(int *a, int n)
{
	int i, b, temp;

	for (i = 0; i < n - 1; i++)
	{
		for (b = i + 1; b > 0; b--)
		{
			temp = *(a + b);
			*(a + b) = *(a + (b - 1));
			*(a + (b - 1)) = temp;
		}
	}
}
