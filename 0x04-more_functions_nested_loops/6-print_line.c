#include "main.h"
/**
 * print_line - Draw straigth line
 * @n: number of times chracter _ should be printed
 * return: void
 */

void print_line(int n)
{
	char line = '_';

	while (n > 0)
	{
		_putchar(line);
		n--;
	}
	_putchar('\n');
}

