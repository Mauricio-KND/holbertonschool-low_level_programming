#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
  char *positive = "positive\n";
  char *negative = "negative\n";
  char *zero = "zero\n";
  printf("%d is %s", i, i == 0 ? zero : i > 0 ? positive : negative);
  return;
}
