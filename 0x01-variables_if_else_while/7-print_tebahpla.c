#include <stdio.h>
/**
 *main - Prints lowercase alphabet in reverse. Followed by a new line.
 *Return: An integer.
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
