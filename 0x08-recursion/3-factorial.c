#include "main.h"

/**
 * factorial - gets factorial of a number
 * @n: integer to use
 * Return: always return success
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * factorial(n - 1));
	return (1);
}
