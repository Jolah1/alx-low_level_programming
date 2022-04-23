#include "main.h"

/**
 * leet - encodes a string
 * @str: input string
 * Return: always return 0
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
