#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - Entry point
 * @str: Variable
 * Return: Always 0
 */

void puts2(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
