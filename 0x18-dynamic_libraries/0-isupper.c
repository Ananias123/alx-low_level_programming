#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: the parameter to be checked
 * Return: 1 if c is upper, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
