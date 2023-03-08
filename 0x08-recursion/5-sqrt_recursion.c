#include "main.h"
/**
 * find - Finds the natural square root of an inputted number.
 * @num: The number to find the square root of.
 * @sqr: The root to be tested.
 *
 * Return: If the no. has a natural square root - the square root.
 *         If the no. does not have a natural square root - -1.
 */

int find(int num, int sqr)
{
	if ((sqr * sqr) == num)
		return (sqr);

	if (sqr == num / 2)
		return (-1);

	return (find(num, sqr + 1));
}

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: The number to return the square root of.
 * Return: The natural square root of the no.
 *
 */

int _sqrt_recursion(int n)
{
	int sqr = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find(n, sqr));
}
