#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - function that prints letters in lower case
 * Return: Nothing
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
}
