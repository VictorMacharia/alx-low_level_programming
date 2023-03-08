#include "main.h"
/**
 * _strlen_recursion -  returns the length of a string.
 * @s: Points to the string
 * Return: Returns the length of te string
 *
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

	return (length);
}
