#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _putchar - writes a character to stdout.
 *
 * @c: the character to write
 */

void _putchar(char c);
/**
 * print_rev - Prints string in reverse
 *
 * @s: The string to print
 */

void print_rev(char *s)
{
	int length = strlen(s);
	int i;

	for (i = length - 1; i >= 0; i++)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
