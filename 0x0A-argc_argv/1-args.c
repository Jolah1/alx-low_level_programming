#include <stdio.h>

/**
 * main - entry point to print
 * @argc: n args
 * @argv: arr args
 * Return: always return 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
