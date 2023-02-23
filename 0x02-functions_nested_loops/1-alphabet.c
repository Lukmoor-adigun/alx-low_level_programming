#include "main.h"
#include <stdio.h>

/**
 * print_alphabet -Print lower case alphabets
 *
 * Return: return alphabets
 */

void print_alphabet(void)
{
	char letter = 'a';

	do {
		_putchar(letter);
		letter++;
	} while (letter <= 'z');

	_putchar('\n');
}

