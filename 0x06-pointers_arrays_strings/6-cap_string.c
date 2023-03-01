#include "main.h"

/**
 * cap_string - Caapitalizes all words of a string.
 * @x: Is a string
 * Return: A pointer to the changed string
 *
 */

char *cap_string(char *x)
{
	int index = 0;

	while (x[index])
	{
		while (!(x[index] >= 'a' && x[index] <= 'z'))
			index++;

		if (x[index - 1] == ' ' ||
		    x[index - 1] == '\t' ||
		    x[index - 1] == '\n' ||
		    x[index - 1] == ',' ||
		    x[index - 1] == ';' ||
		    x[index - 1] == '.' ||
		    x[index - 1] == '!' ||
		    x[index - 1] == '?' ||
		    x[index - 1] == '"' ||
		    x[index - 1] == '(' ||
		    x[index - 1] == ')' ||
		    x[index - 1] == '{' ||
		    x[index - 1] == '}' ||
		    index == 0)
			x[index] -= 32;

		index++;
	}

	return (x);
}
