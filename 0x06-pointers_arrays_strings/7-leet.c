#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string
 * Return: always return pointer to dest
 */

char *leet(char *s)
{
	int count = 0, i;
	int low_letters[] = "aeotl";
	int upp_letters[] = "AEOTL";
	int numbers[] = "43071";

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == low_letters[i] || *(s + count) == upp_letters[i])
			{
				*(s + count) = numbers[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
