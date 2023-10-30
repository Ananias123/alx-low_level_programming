#include "main.h"

/**
 * _puts - A program that print out a string to standard output.
 * @str: The string that is intended to be printed
 * _putchar will be used to print a new line
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
