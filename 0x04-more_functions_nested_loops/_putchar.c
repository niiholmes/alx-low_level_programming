#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @d: Th echaracter to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char d)
{
	return (write(1, &d, 1));
}
