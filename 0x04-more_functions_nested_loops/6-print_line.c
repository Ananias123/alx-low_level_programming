#include "main.h"

/**
 * print_line - the function that print a straight line
 * @n: how long a line is
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int a;

		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	
}
