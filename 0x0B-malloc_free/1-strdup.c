#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function returns a pointer to a newly allocated space in memory
 * @str: character
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *p;
	int a, f = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;

	p = malloc(sizeof(char) * (a + 1));

	if (p == NULL)
		return (NULL);

	for (f = 0; str[f]; f++)
		p[f] = str[f];
	return (p);
}
