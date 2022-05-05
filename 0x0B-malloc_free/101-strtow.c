#include <stdlib.h>
#include "main.h"

/**
 * count_word - counts words in a string
 * @s: string to count
 * Return: return the number of words in the string
 */
int count_word(char *s)
{
	int flag, c, x;

	flag = 0;
	x = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			x++;
		}
	}

	return (x);
}
