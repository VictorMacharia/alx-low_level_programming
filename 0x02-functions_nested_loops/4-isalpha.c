#include "main.h"
/**
 * _isalpha - checks the alphabet
 * @c: checks the character
 *
 * Return: Is 1 if c is a letter, lowercase or uppercase
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
