#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - Searches for an integer.
 * @array: Pointer to an array of integers.
 * @size: The number of elements in the array.
 * @cmp: Pointer to a function that takes an integer parameter and
 * returns an integer.
 *
 * Return: The index of the first element for which the cmp function
 * does not return 0, or -1 if no element matches or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
