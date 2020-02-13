#include <stdio.h>
/**
 *main - Prints alphabet in lowercase. Then uppercase, followed by new line.
 *Return: An integer.
 */
int main(void)
{
	char c = 'a';
	/* Starts from a until z. */
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
