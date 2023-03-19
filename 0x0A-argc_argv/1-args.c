#include <stdio.h>
/**
 * main - program that prints number of arguments passed int it
 *
 * @argc: command line argument
 * @argv: pointer to array to store the strings in argc
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
