#include "main.h"

/**
 * _isupper - Check if a letter is in uppercase
 * @a: The number to be checked
 *
 * Return: 1 for uppercase letter and 0 for any other case
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}

	return (0);
}
