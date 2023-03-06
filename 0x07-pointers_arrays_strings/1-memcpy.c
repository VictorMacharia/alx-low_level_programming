#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: points to the memory area where the bytes are copied to.
 * @src: points to the memory area where the bytes are copied from.
 * @n: number of bytes to be copied.
 * Return: returns value to the pointer dest.
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest1 = dest;
	char *src1 = src;

	for (; n != 0; dest1++, n--, src1++)
		*dest1 = *src1;
	return (dest);
}
