#include "main.h"

/**
 * main - check the code
 *
 * Return: always 0
 */

int main(void)
{
	char c =  'a';

	if (_isalpha(c))
	{
		_putchar(c);
		_putchar('e');
		_putchar('G');
	}
	else
	{
		_putchar(c);
		_putchar('o');
		_putchar('K');
	}
	
	_putchar('\n');
	return (0);
}

