#include "main.h"

/**
 * main - entry point
 * Return: always return 0
 */
int main(void)
{
char *sh = "_putcher";
while (*sh)
{
_putchar(*sh);
sh++;
}
_putchar('\n');
return (0);
}
