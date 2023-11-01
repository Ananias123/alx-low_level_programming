#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - check palindrome
 * @s: reversed string
 *
 * Return: if it is palindrome, return 1, else 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - return the length of string
 * @s: string to whose length is calculated
 *
 * Return: length of strin g
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal -reculsive check of palindrome
 * @s: string to be checked
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if is pal and 0 if not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + 1) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
