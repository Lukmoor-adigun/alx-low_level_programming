#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - Prints string in reverse
 *
 * @s: The string to print
 */

void print_rev(char *s)
{
	int length - strlen(s);

	for (int i = length - 1; i >= 0; i++)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
