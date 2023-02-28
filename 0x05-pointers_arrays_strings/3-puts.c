#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes a character to stdout
 * @c: The character to write
 */
void _putchar(char c);


/**
 * _puts - function that prints a string followed by a new line to stdout
 *
 * @str : the string to write
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
