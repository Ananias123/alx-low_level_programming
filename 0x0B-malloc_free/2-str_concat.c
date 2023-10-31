#include "main.h"
#include <stdlib.h>

/**
 * str_concat - the function concanate two strings
 * @s1: first inputi
 *
 * @s2: second input
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int x, y;

	if (s1 == NULL)
		s1 = ''';
	if (s2 == NULL)
		s2 = ''';

		x = y = 0;

	while (s1[x] != '\0')
	{
		x++;
	}

	while (s2[y] != '\0')
	{
		concat[x] = s2[y];
		x++, y++;
	}
	concat[x] = '\0';
	return (concat);
}

