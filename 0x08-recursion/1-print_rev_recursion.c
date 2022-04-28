#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse recourse
 * @s: string
 * Return: always return 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
