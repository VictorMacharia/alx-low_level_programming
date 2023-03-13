#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function returns a pointer to a new string
 *           which is a duplicate of the string str
 * @str: Is the string
 * Return: NULL if str = NULL
 *
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, length;

	if (!str)
		return (NULL);

	for (length = 0; str[length]; length++)
		;
	length++;
	ptr = malloc(length * sizeof(char));

	if (!ptr)
		return (NULL);

	for (i = 0; i <= length; i++)
		ptr[i] = str[i];

	return (ptr);
}
