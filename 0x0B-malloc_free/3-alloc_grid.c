#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: no. of columns of the array
 * @height: no. of rows of the array
 * Return: a pointer to a 2 dimensional array of integers
 *
 */

int **alloc_grid(int width, int height)
{
	int **twoDim;
	int hgt_index, wid_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoDim = malloc(sizeof(int *) * height);

	if (twoDim == NULL)
		return (NULL);

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		twoDim[hgt_index] = malloc(sizeof(int) * width);

		if (twoDim[hgt_index] == NULL)
		{
			for (; hgt_index >= 0; hgt_index--)
				free(twoDim[hgt_index]);

			free(twoDim);
			return (NULL);
		}
	}

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
			twoDim[hgt_index][wid_index] = 0;
	}

	return (twoDim);
}
