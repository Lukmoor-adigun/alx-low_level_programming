#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - function that prints last digit of a nuber
 *
 * return: last digit  on success
 */

int print_last_digit(int num)
{
	int last_digit = num % 10;
	return (last_digit);
}

