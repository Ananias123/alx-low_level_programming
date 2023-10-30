#include "main.h"

/**
 * _strspn - Entry point of the program
 * @s: entered value
 * @accept: input
 *
 * Return: Always 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				n++
				break;
			}
			else if (accept[x + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
