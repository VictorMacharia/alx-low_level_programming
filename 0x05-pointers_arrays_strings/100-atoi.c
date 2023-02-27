#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: points to the string to be converted.
 *
 */

int _atoi(char *s)
{
	int num, numcount, mult, a, length, neg;

	length = 0;
	a = 0;
	numcount = 0;
	mult = 1;
	neg = 1;
	num = 0;

	while (s[length] != '\0')
	{
		if (s[length] >= '0' && s[length] <= '9')
		{
			numcount++;
			if (!(s[length + 1] >= '0' && s[length + 1] <= '9'))
				break;
		}
		length++;
	}
	for (; numcount > 1; numcount--)
		mult *= 10;
	for (; a <= length; a++)
	{
		if (s[a] == '-')
			neg *= -1;
		else if (s[a] <= '9' && s[a] >= '0')
		{
			num += (s[a] - '0') * mult * neg;
			mult /= 10;
		}
	}
	return (num);
}
