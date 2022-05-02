#include "main.h"

/**
 * *_strcat - function to connute strings
 * @dest: pointer to a char
 * @src: pointer to a char
 * Return: return the value of dest
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}

	dest[a] = '\0';
	return (dest);
}
