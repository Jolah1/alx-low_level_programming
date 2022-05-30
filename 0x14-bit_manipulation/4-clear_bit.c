#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0.
 * @n: A pointer to the bit.
 * @index: The index to set the value at
 * Return: return 1 otherwise 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
