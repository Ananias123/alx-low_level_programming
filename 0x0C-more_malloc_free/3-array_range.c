#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @max: maximum value
 * @min: minimum value
 *
 * Return: Array
 */
int *array_range(int min, int max)
{
	int *x, a = 0;

	if (min > max)
		return (NULL);

	x = malloc(sizeof(int) * (max - min) + sizeof(int));

	if (x == NULL)
		return (NULL);

	while (min <= max)
	{
		x[a] = min;
		a++;
		min++;
	}
	return (x);
}

