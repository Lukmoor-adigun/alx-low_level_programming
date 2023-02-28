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
 * rev_string - reverse a string
 *
 * @s: The string to reverse
 */

void rev_string(char *s)
{
	int length = strlen(s);
	int i, j;
	char temp;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
