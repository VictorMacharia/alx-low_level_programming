#include "main.h"
/**
 * _islower - checks for lower case
 * @c: the character to be checked
 *
 * main - Entry Point
 *
 * Return: Is 1 if c is lowercase (success)
 *
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
