#include "main.h"
#include <string.h>
/**
 * _strcpy - entry point
 * @dest: first variable
 * @src: source variable
 * Return: always 0
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = strlen(src);
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
