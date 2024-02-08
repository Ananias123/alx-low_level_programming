#include "main.h"

/**
 * flip_bits - A function that counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, flipbit = 0;
	unsigned long int recent;
	unsigned long int exclusive = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		recent = exclusive >> x;
		if (recent & 1)
			flipbit++;
	}

	return (flipbit);
}
