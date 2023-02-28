#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes a character to stdout.
 *
 * @c: the character to write
 */

void _putchar(char c);
/**
 * puts2 - reverse a string
 *
 * @s: The string to print
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
