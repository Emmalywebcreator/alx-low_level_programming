#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: wideness of the array
 * @height: lenght of the array
 * Return: Pointer to 2 dimensional array.
 */

int **alloc_grid(int width, int height)
{
	int **mem;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	mem = malloc(sizeof(int *) * height);

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		mem[i] = malloc(sizeof(int) * width);

		if (mem[i] == NULL)
		{
			for (; i >= 0; i--)
				free(mem[i]);
			free(mem);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)

		mem[i][j] = 0;
	}
	return (mem);
}





