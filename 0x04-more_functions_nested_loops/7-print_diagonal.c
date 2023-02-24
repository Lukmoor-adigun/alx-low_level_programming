#include "main.h"
/**
 * print_diagonal - print diagonal lines on the terminal
 * @n: number of times characters to print
 * return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			for (int j =0; j < i; j++)
			{
				_putchar(' ');
			}
		}
		_putchar('\\');
		_putchar('\n');
	}
}
