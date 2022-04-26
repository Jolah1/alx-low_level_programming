#include "main.h"

/**
 * _strpbrk - finds first matching character in string
 * @s: input string to search for matching character
 * @accept: characters that could be matched
 * Return: pointer to matching character
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a] != '\0'; a++)
		for (b = 0; accept[b] != '\0'; b++)
			if (s[a] == accept[b])
				goto exit;
exit: return (s[a] != '\0' ? s + a : '\0');
}
