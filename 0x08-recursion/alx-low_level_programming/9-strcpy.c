#include "main.h"

/**
 * _strcpy - A function that copies the src string
 * @dest: where the string is copied to
 * @src: where the string is copied from
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int q = 0;
	int r = 0;

	while (*(src + q) != '\0')
	{
		q++
	}
	for (; r < q; r++)
	{
		dest[r] = src[r];
	}

	dest[q] = '\0';
	return (dest);
}
