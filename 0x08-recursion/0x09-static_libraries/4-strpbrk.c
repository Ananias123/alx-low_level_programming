#include "main.h"

/**
 * _strpbrk - Entry point of the program
 * @s: input value
 * @accept: input value
 *
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			return (s);
		}
	s++
	}

	return ('\0');
}

