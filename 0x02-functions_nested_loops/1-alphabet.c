#include "main.h"

/**
 * main - Entry point
 *
 * Description: function that prints alphabet
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	char letter = 'a';

	do {
		_putchar(letter);
		letter++;
	} while (letter <= 'z');

	_putchar("\n");
}

int main(void)
{
	print_alphabet();
	return (0);
}

