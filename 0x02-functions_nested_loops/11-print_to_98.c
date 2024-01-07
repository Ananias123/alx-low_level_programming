#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that print up to 98
 * @n: parameter to print
 * Return: integer
 */

void print_to_98(int n)
{

	for (n = 0; n <= 98; n++)
	{
		printf("%d, ", n);
	
	}
	printf("\n");
}
