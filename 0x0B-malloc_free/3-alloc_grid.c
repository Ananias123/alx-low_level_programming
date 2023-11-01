#include "main.h"
#include <stdlib.h>


/**
 * alloc_grid - 2 dimensional array of integers
 * @width: columns
 * @height: rows
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **integer;
	int a;
	int b;

	if (width <= 0 || height <= 0)
		return (NULL);

	integer = malloc(sizeof(int *) * height);

	if (integer == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		integer[a] = malloc(sizeof(int) * width);
		if (integer[a] == NULL)
		{
			free(integer);
			for (b = 0; b <= height; b++)
				free(integer[b]);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			integer[a][b] = 0;
	}
	return (integer);
}
