#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: the string to locate
 * @c: character to locate
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
