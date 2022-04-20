#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: variabvle
 * Return: always 0
 */

int _atoi(char *s)
{
	int i;
	int x = 0;
	int y = -1;
	int z = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			y = y * -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			x = x * 10;
			x -= (s[i] - '0');
			z = 1;
		}
		else if (z == 1)
			break;
	}
	x = y * x;
	return (x);
}
