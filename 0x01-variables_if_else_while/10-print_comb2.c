#include <stdio.h>
/**
 *main - Prints the numbers from 00 to 99.
 *Return: An integer.
 */
int main(void)
{
	int i = 0;

	while (i < 100)
	{
		/*Prints digit's first number. */
		putchar((i / 10) + '0');
		/*Prints digit's last number. */
		putchar((i % 10) + '0');
		if (i < 99)
		{
			/*Prints comma and space until 99. */
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
