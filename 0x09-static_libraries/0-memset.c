#include "main.h"

/**
 * _memset -will be used to fill a block of memory with a particular value
 * @s: This is the initial memory address to be filled
 * @b: represent wanted value
 * @n: number of bytes to be changed
 *
 * Return: Array should be changed with a new value of n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
