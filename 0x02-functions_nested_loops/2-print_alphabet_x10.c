#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet ten times on seperate lines
 *
 * Return: Always return alphabets
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;

	while (i < 10)
	{
		int j = 0;
		while (j < 26)
		{
			_putchar(letter);
			letter++;
			j++;
		}
		_putchar('\n');
		letter = 'a';
		i++;
	}
}

