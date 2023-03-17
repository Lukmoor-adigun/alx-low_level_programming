#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _calloc - Allocates memory for an array of nmemb elements, each of size bytes
 * @nmemb: The number of elements in the array
 * @size: The size of each element
 *
 * Return: Pointer to the allocated memory, or NULL if nmeb or size is 0
 * or if malloc fails
 */
void *_calloc(unsigned int nmeb, unsigned int size)
{
	void *ptr;

	if (nmeb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmeb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	/* zero out memory with memset */
	memset(ptr, 0, nmeb * size);
	return (ptr);
}
