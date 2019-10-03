#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Rints an element of an array of integers.
 * @a: int pointer.
 * @n: int.
 * Return: void.
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
{
printf(",");
printf(" ");
}
}
printf("\n");
}