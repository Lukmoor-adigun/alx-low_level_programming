#include <stdio.h>
/**
 * fizz_buzz - function that print 1 to 100
 * @n: number of characters to print
 * return: multiples of 3 Fizz and 5 Buzz and both FizzBuzz
 */

void fizz_buzz(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
			printf("%d ", i);
	}
	printf("\n");
}
/**
 * main - calls fizz_buzz with an argument of 100
 * Return: always 0 (success)
 */
int main(void)
{
	fizz_buzz(100);
	return (0);
}

