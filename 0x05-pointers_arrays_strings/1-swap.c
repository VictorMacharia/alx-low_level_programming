#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: points to variable a
 * @b: points to variable b
 * Return: Always 0 (success)
 *
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}


