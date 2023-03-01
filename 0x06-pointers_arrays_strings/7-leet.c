#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @xstring: Is a string
 * Return: A pointer to the encoded string
 *
 */

char *leet(char *xstring)
{
	int indx1 = 0, indx2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (xstring[indx1])
	{
		for (indx2 = 0; indx2 <= 7; indx2++)
		{
			if (xstring[indx1] == leet[indx2] ||
			    xstring[indx1] - 32 == leet[indx2])
				xstring[indx1] = indx2 + '0';
		}

		indx1++;
	}

	return (xstring);
}
