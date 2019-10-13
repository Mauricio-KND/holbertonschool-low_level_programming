#include <stdio.h>

/**
 * main - Prints number of arguments given to the program.
 * @argv: Arguments.
 * @argc: Number of arguments.
 * Return: Always zero.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
