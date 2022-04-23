#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: input string
 * Return: always return pointer to dest
 */

char *leet(char *str)
{
	int i, x;
	char a[] = "aeotl";
	char b[] = "AEOTL";
	char c[] = "43071";

	for (i =0; str[i] != '\0'; i++)
	{
		for (x = 0; x < 5; x++)
		{
			if (str[i] == a[x] || str[i] == b[x])
			{
				str[i] = c[x];
				break;
			}
		}
	}
	return (str);
}
