#include "main.h"
#include <stdio.h>
/**
 * reverse_array - function that reverse the content of an array
 * of integers
 * @a: first array
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
