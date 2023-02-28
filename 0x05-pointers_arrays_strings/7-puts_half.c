#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _putchar - writes a character to stdout.
 *
 * @c: the character to write
 */

void _putchar(char c);
/**
 * puts_half - prints the second half of a string followed by new line
 *
 * @str: The string to print
 */

void puts_half(char *str)
{
	int length = strlen(str);
	int start = length / 2;
	int i;

	if (length % 2 == 1)
	{
		start = (length - 1) / 2;
	}

	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
