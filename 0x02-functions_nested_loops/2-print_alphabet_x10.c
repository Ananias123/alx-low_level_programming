#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - function that prints alphabets 10 times
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	char i;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');

	}
}
