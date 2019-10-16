#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings.
 *
 * @s1: String 1.
 * @s2: String 2.
 *
 * Return: NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int s1Size = 0, s2Size = 0;
	char *conc, *concStart;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + s1Size))
		s1Size++;
	while (*(s2 + s2Size))
		s2Size++;
	conc = malloc(sizeof(char) * (s1Size + s2Size + 1));
	if (conc == NULL)
		return (NULL);
	concStart = conc;
	while (*s1)
		*conc++ = *s1++;
	while (*s2)
		*conc++ = *s2++;
	*conc = '\0';
	return (concStart);
}
