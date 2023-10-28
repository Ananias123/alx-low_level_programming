#include "main.h"

/**
 * _strlen - a function that prints the length of a string
 * @s: string
 *
 * Return: The length of a string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s !=  '\0')
	{
		length++;
		s++;
	}
	return (length);
}
