#include <stdio.h>
/**
 * main - program that prints all arguments it receives
 *
 * @argc: stores the number of arguments passed
 * @argv: arrray to store strings passed int argc
 *
 * Return: always 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
