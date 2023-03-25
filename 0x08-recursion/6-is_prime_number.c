#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * is_prime_number - Function that returns 1 if the integer is a prime number
 * otherwise return 0.
 * @n: variable to check integer
 * Return: 1 if prime number, 0 if niot.
 */
int is_prime_number(int n)
{
	int i;

	if (n < 1)
	{
		printf("0\n");
	}
	else if (n == 2 || n == 3)
	{
		return (1);
	}
	else if (n % 2 == 0)
	{
		return (0);
	}
	else
	{
		for (i = 3; i <= sqrt(n); i += 2)
		{
			if (n % 1 == 0)
			{
				return (0);
			}
		}
		return(1);
	}
	return (0);
}
