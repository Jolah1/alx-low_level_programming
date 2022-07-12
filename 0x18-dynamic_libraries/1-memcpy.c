#include "main.h"

/**
 * _memcpy - input function
 * @dest: input pointer to string address
 * @src: input pointer to the source
 * @n: number of bytes
 * Return: return to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		*(dest + x) = *(src + x);
		x++;
	}
	return (dest);
}

