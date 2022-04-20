#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - Entry point
 * @str: Variable
 * Return: always 0
 */

void puts_half(char *str)
{
	int i, len;
	int x = 0;

	len = strlen(str);
	if (len % 2 != 0)
	{
		x += 1;
	}

	for (i = (len + x) / 2; i < len; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
