#include "main.h"

/**
 * print_line - prints a line on command line
 * @n: an integer to print
 * Return: always return 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
