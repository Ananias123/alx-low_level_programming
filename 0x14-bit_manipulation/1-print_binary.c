#include "main.h"

/**
 * _pow - function that calculates the power to the base of number
 * @base: base of the exponent
 * @power: power of the exponent
 * Return: the number
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int number;
	unsigned int i;

	number = 1;
	for (i = 1; i <= power; i++)
		number *= base;
	return (number);
}

/**
 * print_binary - a function that prints a number in binary notation
 * @n: number to be printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
