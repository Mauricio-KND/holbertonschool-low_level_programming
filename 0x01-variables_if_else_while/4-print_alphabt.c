#include <stdio.h>
/**
 *main - Prints the alphabet in lowercase, followed by new line.
 *Return: An integer.
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		/* Make the jump. */
		if (c == 'e' || c == 'q')
			c++;
		/* Print and continue. */
		else
		{
			putchar(c);
			c++;
		}
	}
	/* At the end, the new line. */
	putchar('\n');
	/* Return the integer to the function. */
	return (0);
}
