#include <stdio.h>
/**
 *main - Prints all digits base 10 from 0, followed new line.
 *Return: An integer.
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
