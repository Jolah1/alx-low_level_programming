#include "main.h"
#include <stdio.h>

/**
 * isupper - checks if parameter c represents an upper case
 * @c: int representing a character
 * Return: always return 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	return (1);
	return (0);
}
