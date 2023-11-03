#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: First string
 * @s2: Second string
 * @n: input
 * Return: concatanaated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a;
	unsigned int s1long;
	unsigned int s2long;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		s1long++;
	for (a = 0; s2[a] != '\0'; a++)
		s2long++;

	str = malloc(sizeof(char) * (s1long + n) + 1);
	if (str == NULL)
		return (NULL);
	if (n >= s2long)
	{
		for (a = 0; s1[a] != '\0'; a++)
			str[a] = s1[a];
		for (a = 0; s2[a] != '\0'; a++)
			str[s1long + a] = s2[a];
		str[s1long + a] = '\0';
	}
	else
	{
		for (a = 0; s1[a] != '\0'; a++)
			str[a] = s1[a];
		for (a = 0; a < n; a++)
			str[s1long + a] = s2[a];
		str[s1long + a] = '\0';
	}
	return (str);
}

