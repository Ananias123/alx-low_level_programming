#include "main.h"

/**
 * print_last_digit - function to print thr last digit
 * @a: the parameter to print
 * Return: the value
 */
int print_last_digit(int a)
{
	int i;

	i = a % 10;
	if (a < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}
