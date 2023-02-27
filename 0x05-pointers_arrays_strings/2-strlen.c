#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: points to a variable
 * Return: The value of i
 *
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
