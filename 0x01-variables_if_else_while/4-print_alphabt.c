#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print alphabets excluding 'e' and 'q'
 *
 * Result: 0 on success
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter++;
	}

	putchar('\n');

	return (0);
}

