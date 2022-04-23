#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: the destination
 * @src: the source
 * @n: amount of bytes from the source
 * Return: always return pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];
	for ( ; a < n; a++)
		dest[a] = '\0';

	return (dest);
}
