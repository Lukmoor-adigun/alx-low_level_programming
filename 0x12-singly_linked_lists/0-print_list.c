#include <stdio.h>
#include "lists.h"
/**
 * print_list - Prints all elements of list_t list.
 * @h: Pointer to the head of the node.
 *
 * Return: Number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", h->len);
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = (list_t *) h->next;
	}
	return (count);
}
