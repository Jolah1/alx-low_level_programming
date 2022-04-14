#include "main.h"

/**
 * isupper - checks if parameter c represents an upper case
 * @c: int representing a character
 * Return: always return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
