#include"main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number to be checked
 * @index: index at which to check bit
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int Num, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	Num = 1 << index;
	check = n & Num;
	if (check == Num)
		return (1);
	return (0);
}
