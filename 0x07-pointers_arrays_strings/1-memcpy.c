#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory destination
 * @src: memory source
 * *@n: number of bytes
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
