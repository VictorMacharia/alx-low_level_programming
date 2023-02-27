#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: points to the string to be reversed
 *
 */

void rev_string(char *s)
{
	int length, count, end;
	char start;

	length = 0;

	while (s[length] != '\0')
		length++;
	length--;
	for (count = 0; count <= length / 2; count++)
	{
		start = s[count];
		end = s[length - count];
		s[count] = end;
		s[length - count] = start;
	}
}

