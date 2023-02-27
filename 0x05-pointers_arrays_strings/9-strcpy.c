#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to
 * @dest: char pointer
 * @src: char pointer
 * Return: dest pointer
 *
 */

char *_strcpy(char *dest, char *src)
{
	int length, count;

	length = 0;

	while (src[length] != '\0')
		length++;
	for (count = 0; count <= length; count++)
		dest[count] = src[count];
	return (dest);
}
