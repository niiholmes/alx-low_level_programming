#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 *
 * Return: void
 */
void rev_string(char *s)
{
	int j, d, l;
	char *a, bvy;

	a = s;

	while (s[d] != '\0')
	{
		d++;
	}

	for (l = 1; l < d; l++)
	{
		a++;
	}

	for (j = 0; j < (d / 2); j++)
	{
		bvy = s[j];
		s[j] = *a;
		*a = bvy;
		a--;
	}
}
