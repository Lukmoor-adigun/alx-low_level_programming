#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print alphabets in lowercase
 *
 * return: always 0 (success)
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
