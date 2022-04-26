#include "main.h"

/**
 * _strstr - returns pointer to first char of matching substring
 * @haystack: string to find substring 
 * @needle: substring to find match of char
 * Return: pointer to first char of matching substring
 */

char *_strstr(char *haystack, char *needle)
{
	int a

	while (*haystack != '\0')
	{
		k = 0;
		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
			haystack++, needle++, k++;
		if (*needle == '\0')
			return (haystack - k);
		haystack -= (k - 1), needle -= k;
	}
	return ('\0');
}
