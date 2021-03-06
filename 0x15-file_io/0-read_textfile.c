#include "holberton.h"
/**
 *read_textfile - Reads a text file and prints it to the POSIX standard output.
 *@filename: Name of the file to read.
 *@letters: Letters to print.
 *Return: Number of letters could read-print. 0 if file cannot opened or NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buff;/*Buffer*/
	int RETVAL, READVAL, file;/*Return Value - Read Value*/
	unsigned int a;/*Number of letters*/

	file = RETVAL = a = 0;
	if (filename == NULL)/*Guard case*/
		return (0);
	file = open(filename, O_RDWR);
	if (file == -1)/*Guard Case*/
		return (0);
	READVAL = read(file, &buff, 1);
	if (READVAL == -1)/*Guard Case*/
		return (0);
	for (a = 0; READVAL != 0 && a != letters; a++)/*Counting Letters*/
	{
		RETVAL = write(STDOUT_FILENO, &buff, 1);
		if (RETVAL == -1)
			return (0);
		READVAL = read(file, &buff, 1);
		if (READVAL == -1)
			return (0);
	}
	READVAL = close(file);
	if (READVAL == -1)
		return (0);
	return (a);
}
