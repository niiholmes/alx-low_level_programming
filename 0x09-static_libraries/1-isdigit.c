#include "main.h"

/**
 * _isdigit - Check if a character is a digit
 * @y: The number to be checked
 *
 * Return: 1 for a character that will be a digit and 0 for others
 */
int _isdigit(int y)
{
	if (y >= 48 && y <= 57)
	{
		return (1);
	}

	return (0);
}
