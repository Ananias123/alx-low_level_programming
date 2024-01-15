#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: the argument
 */
char *argstostr(int ac, char **av)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (b < ac)
	{
		while (av[b][c])
		{
			a++;
			c++;
		}
		c = 0;
		b++;
	}
	p = malloc((sizeof(char) * a) + ac + 1);

	b = 0;
	while (av[b])
	{
		while (av[b][c])
		{
			p[d] = av[b][c];
			d++;
			c++;
		}
		p[d] = '\n';

		c = 0;
		d++;
		b++;
	}

	d++;
	p[d] = '\0';
	return (p);
}
