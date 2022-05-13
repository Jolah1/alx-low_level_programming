#include "function_pointers.h"

/**
 * array_iterator - executes a function on elements
 * @array: inputs int array
 * @size: size of the array
 * @action: pointer to the function
 * Return: always return 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array && action)
		for (x = 0; x < size; x++)
			action(array[x]);
}
