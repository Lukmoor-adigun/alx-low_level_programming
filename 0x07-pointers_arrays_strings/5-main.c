#include "main.h"
#include <stdio.h>
/**
 *  * main - entry point
 *   *
 *    * Return: Always 0
 *     */
int main(void)
{
	    char *haystack = "hello, world!";
	        char *needle = "wor";
		    char *p = _strstr(haystack, needle);
		        if (p != NULL)
				    {
					            printf("Found substring '%s' at position %ld\n", needle, p - haystack);
						        }
			    else
				        {
						        printf("Substring '%s' not found\n", needle);
							    }
			        return (0);
}
