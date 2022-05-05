#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new space in the memory
 * @str: a string
 * Return: always return 0
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int x, y;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
		;

	strout = (char *)malloc(sizeof(char) * (x + 1));

	if (strout == NULL)
		return (NULL);

	for (y = 0; y <= x; y++)
		strout[y] = str[y];

	return (strout);
}
