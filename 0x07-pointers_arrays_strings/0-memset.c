#include "main.h"
/**
 * _memset -  a function that fills memory with a constant byte.
 * @s: Is a pointer to the memory area
 * @b: Is the constant byte to be used
 * @n: Is the integer value
 * Return: returns the pointer to the memory area s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	for (; n != 0; p++, n--)
		*p = b;
	return (s);
}
