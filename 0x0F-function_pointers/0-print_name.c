#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Prints a name using a function pointer.
 * @name: The name to print.
 * @f: A function pointer that takes a char* argument and returns nothing.
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
