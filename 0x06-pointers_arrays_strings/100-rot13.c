#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @x: Is a string
 * Return: Points to the encoded string
 *
 */

char *rot13(char *x)
{
	int i, j, hold;
	char check[] = "AaZz";
	char ntom[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(x + i) != '\0'; i++)
		for (j = 0; j < 2; j++)
		{
			if (*(x + i) >= check[j] && *(x + i) <= check[j + 2])
			{
				hold = (*(x + i) - 65 - (j * 32));
				*(x + i) = (ntom[hold] + (j * 32));
			}
		}
	return (x);
}
