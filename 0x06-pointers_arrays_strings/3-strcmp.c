#include "main.h"
/**
 * _strcmp - comparing two strings
 * @s1: first string
 * @s2: second string
 * Return: return 0 if s1 and s2 are the same
 * another number if not
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0, jo = 0;

	while (jo == 0)
	{
		if ((*(s1 + a) == '\0') && (*(s2 + a) == '\0'))
			break;
		jo = *(s1 + a) - *(s2 + a);
		a++;
	}

	return (jo);
}
