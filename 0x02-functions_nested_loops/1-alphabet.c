#include <stdio.h>

/* function prototype */
int _putchar(char c);

/**
 * print_alphabet - Entry point
 * Description: Prints lowercase alphabets
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

/**
 * _putchar - function prototype
 * Return: always return putchar
 */

int _putchar(char c)
{
	return (putchar(c));
}

/**
 * main - calls print_alphabt function
 * Return: always return 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}

