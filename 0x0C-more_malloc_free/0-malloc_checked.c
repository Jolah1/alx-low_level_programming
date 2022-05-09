#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - checks malloc
 * @b: integer to check
 * Return: a pointer or void
 */
void *malloc_checked(unsigned int b)
{
	void *z;

	z = malloc(b);
	if (z == NULL)
		exit(98);
	return (z);
}
