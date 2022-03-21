#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: always 0
 */
int main(void)
{
	char *str;
	int lens;

	str = "My first strlen!";
	lens = _strlen(str);
	printf("%d\n", lens);
	return (0);
}
