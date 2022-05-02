#include <stdio.h>

/**
 * main -entry point
 * @argc: offset count
 * @argv: offset value
 * Return: always return 0
 */


int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
