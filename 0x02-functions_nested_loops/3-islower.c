#include "main.h"

/**
 * _islower(int c) - checks for lower case character
 *@c: character to be checked
 *
 * Return: 1 if lowercase chars and 0 if not.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}

