#include "main.h"
#include <string.h>

/**
 * rev_string - Enrty point
 * @s: variable
 * Return: always 0
 */

void rev_string(char *s)
{
	int i, len;

	char t;

	len = strlen(s);
	for (i = 0; i < (len / 2); i++)
	{
		t = s[i];
		s[i] = s[len - i - 1];
		s[len - i 1] = t;
	}
}
