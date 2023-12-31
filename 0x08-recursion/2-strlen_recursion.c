#include "main.h"

/**
 * _strlen_recursion -  function that returns the length of a string.
 * @s: measured string
 *
 * Return: the string length
 */
int _strlen_recursion(char *s)
{
	int strlength = 0;

	if (*s)
	{
		strlength++;
		strlength += _strlen_recursion(s + 1);
	}
	return (strlength);
}
