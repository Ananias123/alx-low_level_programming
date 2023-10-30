#include "main.h"

/**
 * _strncpy - a program that copy a string
 * @dest: The value entered
 * @src: The value entered
 * @n: Value entered
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int g = 0;

	while (g < n && src[g] != '\0')
	{
		dest[g] = src[g];
		g++;
	}
	while (g < n)
	{
		dest[g] = '\0';
		g++
	}

	return (dest);
}

