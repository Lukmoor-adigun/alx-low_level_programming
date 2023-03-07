#include "main.h"
#include <stdio.h>
/**
 *  * main - entry point
 *   *
 *    * Return: Always 0
 *     */
int main(void)
{
	    char *s = "hello, world!";
	        char *accept = "xyz";
		    char *p = _strpbrk(s, accept);
		        if (p != NULL)
				    {
					            printf("Found byte '%c' at position %ld\n", *p, p - s);
						        }
			    else
				        {
						        printf("No matching byte found\n");
							    }
			        return (0);
}
