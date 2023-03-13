#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * Return: returns a pointer to the two strings concatenated, or NULL if fails
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, len1 = 0, len2 = 0;

	if (!s1)
		s1 = "";
	else
		for (; s1[len1]; len1++)
			;
	if (!s2)
		s2 = "";
	else
		for (; s2[len2]; len2++)
			;
	len2++;
	ptr = malloc((len1 + len2) * sizeof(char));

	if (!ptr)
		return (NULL);

	for (i = 0; i <= (len1 + len2); i++)
	{
		if (i < len1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - len1];
	}

	return (ptr);
}
