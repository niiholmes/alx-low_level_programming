#include "main.h"

/**
 * swap_int - swaps the values of two int
 *
 * @a: an int to swap
 * @b: another int to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int bvy;

	bvy = *a;
	*a = *b;
	*b = bvy;
}

