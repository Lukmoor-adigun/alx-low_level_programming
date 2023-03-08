#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - prints square root of a number
 * @n: number to print square root of
 *
 * Return: natural square root , -1 if no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		int root = _sqrt_recursion(n - 1);

		if (root * root == n)
		{
			return (root);
		}
		else
		{
			return (-1);
		}
	}
}
