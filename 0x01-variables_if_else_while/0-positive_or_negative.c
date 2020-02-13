#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print whether number stored in n is positive / negative / 0.
 * Return: An integer.
 */
int main(void)
{
	int n;

	/* Assigning random number. */
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Compares the number. Next instruction or jump to next condition. */
	if (n > 0)
	{
		/* Prints the number(That it's n), text, and new line. */
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	/* After all, return an integer. */
	return (0);
}
