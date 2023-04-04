#include <stdio.h>
#include "lists.h"
/**
 * print_list - Prints all elements of list_t list.
 * @h: Pointer to the head of the node.
 *
 * Return: Number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
