#include<stdio.h>
/**
 * main - Prints the alphabet in lowercase, followed by a new line.
 * Return: An integer.
 */
int main(void)
{
	char i;

	for (i = 97; i <= 122; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
