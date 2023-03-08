#include "main.h"
/**
 * divisible - Checks if a no. is divisible.
 * @num: The no. to be checked.
 * @div: The divisor.
 *
 * Return: If the no. is divisible - 0.
 *         If the no. is not divisible - 1.
 */

int divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (divisible(num, div + 1));
}

/**
 * is_prime_number - Checks if a no. is prime.
 * @n: The no. to be checked.
 *
 * Return: If the integer is not prime - 0.
 *         If the integer is prime - 1.
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (divisible(n, div));
}
