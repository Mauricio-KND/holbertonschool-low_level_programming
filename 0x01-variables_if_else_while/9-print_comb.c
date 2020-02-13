#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers.
 * Return: An integer.
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			/* Prints comma and space until 9. */
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	/* The new line after complete the loop. */
	putchar('\n');
	return (0);
}
