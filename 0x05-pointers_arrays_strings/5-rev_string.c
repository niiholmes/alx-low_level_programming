#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, a = 0, aux;

	

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i > a)
	{
		aux = s[i];
		s[i--] = s[a];
		s[a++] = aux;
	}
}
