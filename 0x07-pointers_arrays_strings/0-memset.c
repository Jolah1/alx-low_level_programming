#include "main.h"

/**
 * _memset - fill memory with const
 * @s: space of the memory
 * @b: bytes
 * @n: memory area
 * Return: return ponter to s string
 */

char *_memset(char *s, char b, unsighned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
