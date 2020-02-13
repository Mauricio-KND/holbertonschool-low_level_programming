#include <stdio.h>
/**
 *main - Prints numbers base 16 in lowercase, followed by a new line.
 *Return: An integer.
 */
int main(void)
{
	int i;
	char c;
	/* Numbers from 0 to 9. */
	for (i = 0; i < 10; i++)
	{
		/*Print the digit. */
		putchar(i + '0');
	}
	/*Letters from a to f. */
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
