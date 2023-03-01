#include "main.h"

/**
 * string_toupper -  Changes all lowercase letters of a string to uppercase.
 * @x: Is a string
 * Return: a pointer to the changed string
 */

char *string_toupper(char *x)
{
		int index = 0;

	while (x[index])
	{
		if (x[index] >= 'a' && x[index] <= 'z')
			x[index] -= 32;

		index++;
	}

	return (x);
}
