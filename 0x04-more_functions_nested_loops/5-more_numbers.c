#include "main.h"
/**
 * more_numbers - print number multiple times
 *
 * return: void
 */

void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0
			;
		while (j < 150)
		{
			if (num > 9)
			{
				_putchar('0' + (num / 10));
			}
			_putchar('0' + (bum % 10));
			num++;
			j++;
		}
		_putchar('\n');
		num = 0;
		i++;
	}
}

