#include "main.h"

/**
 * _strstr - returns pointer to first char of matching substring
 * @haystack: string to find substring
 * @needle: substring to find match of char
 * Return: pointer to first char of matching substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, b;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (b = 0; needle[b] != '\0'; b++)
			{
				if (haystack[i + b] != needle[b])
				{
					break;
				}
			}
			if (needle[b] == '\0')
			{
				return (haystack + i);
			}
		}
	}
	return ('\0');
}
