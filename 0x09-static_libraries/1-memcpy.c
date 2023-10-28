#include "main.h"

/**
 * _memcpy - to copy a block of memory from one location to another.
 * @dest: The place where memory is stored
 * @src: The place where the memory is copied from
 * @n: Number of bytes
 *
 * Return: copied memory of n number of bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;
	int b = n;

	for (a = 0; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
