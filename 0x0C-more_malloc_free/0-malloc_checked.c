#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: the number of bytes to allocate
 * Return: pointer to the allocated memory
 * if malloc fails, malloc_checked should cause normal process
 * termination wit a status of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (!p)
	{
		exit(98);
	}
	return (p);
}
