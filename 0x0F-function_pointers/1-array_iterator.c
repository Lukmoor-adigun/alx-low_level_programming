#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Executes a function given as a parameter on each
 * element of an array.
 * @array: Pointer to an array of integers.
 * @size: The size of the array.
 * @action: Pointer to a function that takes an integer parameter and
 * performs some operation on it.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
