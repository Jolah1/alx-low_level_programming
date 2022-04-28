#include "main.h"

/**
 * _strlen_recursion - prints length of a string
 * @s: string to count
 * Return: always return 0
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n = _strlen_recursion(s + 1);
		return (n += 1);
	}
	return (0);
}
