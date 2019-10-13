#include <stdio.h>

/**
 * main - Prints all arguments sended to the program.
 * @argv: Arguments.
 * @argc: Number of arguments.
 * Return: Always zero.
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i != argc)
		printf("%s\n", argv[i++]);
	return (0);
}
