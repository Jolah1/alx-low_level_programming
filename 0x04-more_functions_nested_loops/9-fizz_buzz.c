#include <stdio.h>

/**
 * main - entry point
 * Return: always return 0
 */
int main(void)
{
	int i = 1;

	for (1 = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			putchar(' ');
	}
	putchar("\n");
	return (0);
}
