#include "main.h"

/**
 * _strlen - entry point
 * @s: length
 * Return: length of variable (s)
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
