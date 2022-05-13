#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: input name
 * @f: function pointer
 * Return: always return 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
