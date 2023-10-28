#include "main.h"

/**
 * _strchr - The entry point of program
 * @s: Entered value
 * @c: input value
 *
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
