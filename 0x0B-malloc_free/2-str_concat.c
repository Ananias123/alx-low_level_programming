#include "main.h"
#include <stdlib.h>

/**
 * str_concat - the function concanate two strings
 * @s1: first input
 *
 * @s2: second input
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	int x = 0;
	int y = 0;
	int a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		x++;
	for (a = 0; s2[a] != '\0'; a++)
		y++;

	conc = malloc(sizeof(char) * (x + y) + 1);

	if (conc == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
		conc[a] = s1[a];
	for (a = 0; s2[a] != '\0'; a++)
		conc[x + a] = s2[a];
	return (conc);
}
