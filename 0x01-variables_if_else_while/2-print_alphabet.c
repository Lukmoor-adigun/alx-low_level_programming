#include <stdio.h>
/**
 * main - Prints the alphabet in lower case followed by a new line
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

	putchar('\n');

	return (0);
}
