#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: The chars to be checked
 *
 * Return: 1 for alphabets and 0 for non-alphabets
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
