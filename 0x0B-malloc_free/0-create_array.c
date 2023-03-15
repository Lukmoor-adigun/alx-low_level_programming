#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars and initilizes
 * it with a specific char
 * @size: size of the variable/memory to print
 * @c: character
 *
 * Return: pointer to the array or NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	char *_c;
	int *_size;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		_c = malloc(*_c);
		_c[0] = c;
		_size = malloc((*_size) * size);
	}
	return (0);
}
