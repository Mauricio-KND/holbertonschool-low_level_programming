#include <stdio.h>

/**
 * main - Prints our its name followed by a new line.
 * @argc: Argument count.
 * @argv: Strings that comes after calling the function.
 * Return: None.
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	else
	{
		argv[0] = argv[4];
		printf("%s\n", argv[0]);
	}
	return (0);
}
