#include "holberton.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1.
 * Return: The converted number, or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int nm = 0;/*Number to convert.*/
	int ndx;/*Index.*/

	if (b == NULL)
		return (0);/*If fail return 0*/
	for (ndx = 0; b[ndx] != '\0'; ndx++)
	{
		if (b[ndx] != '0' && b[ndx] != '1')
			return (0);
		nm <<= 1;
		if (b[ndx] == '1')
			nm += 1;
	}
	return (nm);
}
