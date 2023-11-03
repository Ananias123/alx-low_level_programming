#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: the pointer to the memory
 * @old_size: initial size of the allocated space on ptr
 * @new_size: actual size for new memory block
 * Return: Always 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *x;
	size_t a, max = new_size;
	char *olds = ptr;

	if (ptr == NULL)
	{
		x = malloc(new_size);
			return (x);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	x = malloc(new_size);
	if (x == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (a = 0; a < max; a++)
		x[a] = olds[a];
	free(ptr);
	return (x);
}


