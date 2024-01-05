#include "main.h"

/**
 * print_sign - the function that prints the sign of a number
 * @n: the parameter to be checked
 * Return: 1 if the number is positive, -1 if negative, else 0
 */


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
