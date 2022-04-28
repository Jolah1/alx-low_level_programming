#include "main.h"

/**
 * sqrt2 - helps in evaluating from 1 to n
 * @a: same integer as n
 * @b: integer from 1 to n
 * Return: value of the root
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - returns the square root of a number
 * @n: integer
 * Return: return int of the square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
