#include "main.h"
#include <stdio.h>
/**
 * _islower - function that check for the lower case
 * @c: the letter bto be checked
 * Return: 1 if c is lowercase else return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
