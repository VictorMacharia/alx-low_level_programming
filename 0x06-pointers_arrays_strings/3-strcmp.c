#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: Is a string
 * @s2: Is a string
 * Return: If str1 < str2, negative difference of 1st unmatched characters.
 *         If str1 == str2, 0.
 *         If str1 > str2, positive difference of 1st unmatched characters.
 *
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
