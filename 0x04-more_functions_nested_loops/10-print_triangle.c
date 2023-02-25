#include "main.h"
/**
 * print_triangle - function that prints triangle
 * @size: size of triangle to print
 * return: Tringle , new line if size is 0 or less
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
			_putchar(' ');

		for (j = 0; j <= 1; j++)
			_putchar('#');

		_putchar('\n');
	}
}

