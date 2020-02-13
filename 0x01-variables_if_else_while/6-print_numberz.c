#include <stdio.h>
/**
 *main - Prints all digits base 10 from 0, followed by a new line.
 *Return: An integer.
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
