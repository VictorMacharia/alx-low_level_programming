#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: points to the string containing the character
 * @c: Is the character.
 * Return: returns the pointer to the first occurrence of the character.
 *
 */

char *_strchr(char *s, char c)
{
	char *s1 = s - 1;

	do {
		s1++;
		if (*s1 == c)
			return (s1);
	} while (*s1 != '\0');

	return (0);
}
