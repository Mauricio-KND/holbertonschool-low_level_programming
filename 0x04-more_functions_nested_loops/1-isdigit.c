#include "holberton.h"
/**
 * _isdigit - Entry to the program and find the digit.
 * @c: Represents the digit to check.
 * Return: (1) if digit or 0 for else.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
return (0);
}
