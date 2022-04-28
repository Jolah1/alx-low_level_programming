#include "main.h"

/**
 * _pow_recursion - gives power of integer
 * @x: integer to power
 * @y: power to do
 * Return: return integer value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
