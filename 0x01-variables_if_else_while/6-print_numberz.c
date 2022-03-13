#include <stdio.h>

/**
 * main - Prints single digits of base ten starting from zero
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
