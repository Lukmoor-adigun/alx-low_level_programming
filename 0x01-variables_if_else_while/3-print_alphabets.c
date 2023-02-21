#include <stdio.h>
/**
 * main - Prints alphabets in lower and upper case
 *
 * Return: 0 on success
 */

int main(void)
{
	char letter = 'a';


	do {
		putchar(letter);
		letter++;

	} while (letter <= 'z');

	letter = 'A';

	do {
		putchar(letter);
		letter++;
	} while (letter <= 'Z');

	putchar('\n');

	return (0);
}

